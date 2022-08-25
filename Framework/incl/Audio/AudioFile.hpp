/*
** EPITECH PROJECT, 08/08/22
** speedEngine
** File description:
** AudioFile.hpp
*/
#ifndef INC_3862D68E29A2438381AB88537342E2C5
#define INC_3862D68E29A2438381AB88537342E2C5

#include <iostream>
#include <SFML/Audio.hpp>
#include "Error/LoadSong.hpp"
#include "AStreamFile.hpp"

namespace speedEngine {
	namespace audioManager {
		class AudioFile : public AStreamFile {
		public:
			AudioFile(std::string &name, std::string &filepath);
			~AudioFile() override = default;

			void intro(int duration, int volume_max);
			void setup() override;

			void setVolume(float vol) override;

			void pause() override;

			void play() override;

			void reset() override;

			const sf::Sound &getSong() const;

			void setSong(const sf::Sound &song);

			const sf::SoundBuffer &getSongBuffer() const;

			void setSongBuffer(const sf::SoundBuffer &songBuffer);

		private:
			sf::Sound _song;
			sf::SoundBuffer _songBuffer;

		};

	} // SpeedEngine
} // audioManager

#endif //INC_3862D68E29A2438381AB88537342E2C5
