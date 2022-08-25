/*
** EPITECH PROJECT, 08/08/22
** speedEngine
** File description:
** audioManager.cpp
*/
#include "Audio/audioManager.hpp"

namespace speedEngine {
	namespace audioManager {
		bool AudioManager::setvolume(std::string &audioId, float vol) {
			return true;
		}

		void AudioManager::play(std::string &name) {
			std::cout << "enter of audio-manager::play" << std::endl;
			auto song = _songs.at(name);
			song.play();
			std::cout << "out of audio-manager::play" << std::endl;
		}
		void AudioManager::pause(std::string name) {
			_songs.at(name).pause();
		}
		void AudioManager::reset(std::string name) {

			_songs.at(name).reset();
		}
	} // SpeedEngine
} // AudioManager