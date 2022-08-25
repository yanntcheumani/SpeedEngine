/*
** EPITECH PROJECT, 08/08/22
** speedEngine
** File description:
** LoadSong.hpp
*/
#ifndef INC_86FA75F19992469C930BC74D2D101E89
#define INC_86FA75F19992469C930BC74D2D101E89

#include <iostream>
#include "Exception.hpp"

namespace speedEngine {

	namespace audioManager {
		class LoadSongError : public Exception {
		public:
			LoadSongError(std::string &name, std::string &filepath)
					: Exception(
					"Error load " + name + " with this filepath: " + filepath) {}

		};
	};
};


#endif //INC_86FA75F19992469C930BC74D2D101E89
