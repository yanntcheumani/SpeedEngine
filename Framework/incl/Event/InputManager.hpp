/*
** EPITECH PROJECT, 05/08/22
** speedEngine
** File description:
** InputManager.hpp
*/
#ifndef INC_667152A8A2E345DFB16F2638111F0717
#define INC_667152A8A2E345DFB16F2638111F0717
#include <SFML/Graphics.hpp>

namespace speedEngine {

	class InputManager {
	public:
		InputManager() = default;
		~InputManager() = default;

		bool IsSpriteClicked(const sf::Sprite& object, sf::Mouse::Button button, sf::RenderWindow &window);
		sf::Vector2i GetMousePosition (sf::RenderWindow &window);
	private:
	};
}


#endif //INC_667152A8A2E345DFB16F2638111F0717
