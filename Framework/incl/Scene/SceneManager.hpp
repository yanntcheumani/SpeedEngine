/*
** EPITECH PROJECT, 02/08/22
** speedEngine
** File description:
** StateMachine.hpp
*/

#ifndef INC_C3D2BCC7B62A4D3A8FEC32B27C74A27R
#define INC_C3D2BCC7B62A4D3A8FEC32B27C74A27R

#include <memory>
#include <stack>
#include "Scene/Ascene.hpp"

namespace speedEngine {
	namespace scene {
		typedef std::shared_ptr<Ascene> SceneRef;

		class SceneManager {
		public:
			SceneManager() = default;

			~SceneManager() = default;;

			/**
			 * @param newScene this function add this Scene on a stack, that will be the lateststate that is running everything else will be paused
			 * @param isReplacing if you erase the current scene in the stack
			 */
			void addState(SceneRef newScene, bool isReplacing = true);

			void RemoveState();

			void ProcessStateChanges();

			SceneRef GetActiveState();

			void setWindow( std::shared_ptr<sf::RenderWindow> &window);

		private:
			std::shared_ptr<sf::RenderWindow> _window;
			std::stack<SceneRef> _scenes;
			SceneRef _newScene;
			bool _isRemoving = false;
			bool _isAdding = false;
			bool _isReplacing = false;
		};
	};
};

#endif //INC_56DED1A24F6C4D1995995DFB13C93AF2
