/*
** EPITECH PROJECT, 05/08/22
** speedEngine
** File description:
** AssetManager.hpp
*/
#ifndef INC_415034295824415D8D5079F983B834F2
#define INC_415034295824415D8D5079F983B834F2
#include <unordered_map>
#include <SFML/Graphics.hpp>

namespace speedEngine {
	namespace asset {
		class AssetManager {
		public:
			AssetManager() = default;

			~AssetManager() {
				if (!_textures.empty())
					_textures.clear();
				if (!_fonts.empty())
					_fonts.clear();
			};

			void LoadTexture(std::string name, std::string fileName);

			sf::Texture &GetTexture(std::string name);

			void LoadFont(std::string name, std::string fileName);

			sf::Font &GetFont(std::string name);

		private:
			std::unordered_map<std::string, sf::Texture> _textures;
			std::unordered_map<std::string, sf::Font> _fonts;
		};
	}

} // SpeedEngine

#endif //INC_415034295824415D8D5079F983B834F2
