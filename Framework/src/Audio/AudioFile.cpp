/*
** EPITECH PROJECT, 08/08/22
** speedEngine
** File description:
** AudioFile.cpp
*/

#include "Audio/AudioFile.hpp"
#include <utility>

namespace speedEngine {
	namespace audioManager {
		AudioFile::AudioFile(std::string &name, std::string &filepath)
				: AStreamFile(name, filepath) {
		}

		void AudioFile::setup() {
//			if (!_songBuffer.loadFromFile(_filepath)) {
//				throw LoadSongError(_name, _filepath);
//			}
//			_song.setBuffer(_songBuffer);
//			if (_song.getBuffer() != nullptr) {
//				std::cout << _name << " sound effect is set" << std::endl;
//			}
		}

		const sf::Sound &AudioFile::getSong() const {
			return _song;
		}

		void AudioFile::setSong(const sf::Sound &song) {
			_song = song;
		}

		const sf::SoundBuffer &AudioFile::getSongBuffer() const {
			return _songBuffer;
		}

		void AudioFile::setSongBuffer(const sf::SoundBuffer &songBuffer) {
			_songBuffer = songBuffer;
		}

		void AudioFile::pause() {
//			if (_song.getStatus() !=  sf::SoundSource::Paused
//				&& _song.getStatus() !=  sf::SoundSource::Stopped)
//				_song.pause();
		}

		void AudioFile::setVolume(float vol) {
			_song.setVolume(vol);
		}

		void AudioFile::play() {
			std::cout << "enter of AudioFile::play" << std::endl;
			sf::SoundBuffer tmp;
			if (!tmp.loadFromFile(_filepath))
				throw LoadSongError(_name, _filepath);
			_song.setBuffer(tmp);
			if (_song.getStatus() != sf::SoundSource::Playing) {
				_song.play();
				if (_song.getBuffer() == nullptr) {
					std::cout << _name + " not playings" << std::endl;
				} else {
					std::cout << _name + " playing" << std::endl;

				}
			}
			std::cout << _name + " end playing" << std::endl;
			std::cout << "end fucntion" << std::endl;
		}

		void AudioFile::reset() {
			std::cout << "enter of audio-manager::reset" << std::endl;

//			if (_song.getStatus() !=  sf::SoundSource::Stopped)
//				_song.stop();

		}

		void AudioFile::intro(int duration, int volume_max) {

		}
	} // SpeedEngine
} // audioManager