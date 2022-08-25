/*
** EPITECH PROJECT, 18/08/22
** speedEngine
** File description:
** Ascene.hpp
*/
#ifndef INC_8740CCF25B8B45F691046A8CFD641139
#define INC_8740CCF25B8B45F691046A8CFD641139
#include <SFML/Graphics/RenderWindow.hpp>
#include "Audio/audioManager.hpp"
#include "IScene.hpp"
#include "Asset/AssetManager.hpp"
#include <memory>

namespace speedEngine {
	namespace scene {
		class Ascene: public IScene {
		public:
			explicit Ascene() = default;

			explicit Ascene(std::shared_ptr<sf::RenderWindow> window);

			Ascene(const audioManager::AudioManager &audios,
			       const asset::AssetManager &assets, std::shared_ptr<sf::RenderWindow> window);
			/**
			 * @details
			 * This function is not stable
			 * @param video Size of the window
			 * @param title windows Title
			 */
			void createWindow(sf::VideoMode video, std::string title);

			virtual ~Ascene() {};

			// virtual function
			virtual void Init() {};

			virtual void HandleInput() {};

			virtual std::tuple<SCENE_EVENT, Ascene> Update(float dt) {
				std::tuple<speedEngine::scene::SCENE_EVENT,
						speedEngine::scene::Ascene> event;
				return event;
			};

			virtual void Draw(float dt) override {};

			void Pause() override {};

			void Resume() override {};

			bool isIsEnd() const;

		protected:
			std::shared_ptr<sf::RenderWindow> _window;
			speedEngine::audioManager::AudioManager _audios;
			speedEngine::asset::AssetManager _assets;
			sf::Sprite _background;
			bool _isEnd = false;
		};

	}
}
#endif //INC_8740CCF25B8B45F691046A8CFD641139
