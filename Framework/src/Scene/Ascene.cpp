/*
** EPITECH PROJECT, 18/08/22
** speedEngine
** File description:
** Ascene.cpp
*/
#include "Scene/Ascene.hpp"

#include <utility>

namespace speedEngine {
	namespace scene {

		Ascene::Ascene(std::shared_ptr<sf::RenderWindow> window)
		: _window(std::move(window)) {

		}

		Ascene::Ascene(const audioManager::AudioManager &audios,
		               const asset::AssetManager &assets,
		               std::shared_ptr<sf::RenderWindow> window)
		: _audios(audios), _assets(assets), _window(std::move(window))
		{
		}

		void Ascene::createWindow(sf::VideoMode, std::string title) {

		}

		bool Ascene::isIsEnd() const {
			return _isEnd;
		}
	} // speedEngine
} // scene