/*
** EPITECH PROJECT, 05/08/22
** speedEngine
** File description:
** AssetManager.cpp
*/

#include "Asset/AssetManager.hpp"
#include "Error/SceneError.hpp"

namespace speedEngine {

	void asset::AssetManager::LoadTexture(std::string name, std::string fileName)
	{
		sf::Texture tex;
		if (tex.loadFromFile(fileName)) {
			_textures[name] = tex;
		} else {
			throw speedEngine::scene::SceneError();
		}
	}

	sf::Texture &asset::AssetManager::GetTexture(std::string name) {
		return _textures[name];
	}

	void asset::AssetManager::LoadFont(std::string name, std::string fileName) {
		sf::Font font;
		if (font.loadFromFile(fileName)) {
			_fonts[name] = font;
		} else {
			throw speedEngine::scene::SceneError("error load font");
		}
	}

	sf::Font &asset::AssetManager::GetFont(std::string name) {
		return _fonts[name];
	}
}