/*
** EPITECH PROJECT, 08/08/22
** speedEngine
** File description:
** audioManager.hpp
*/
#ifndef INC_025DAA2519304CC3843E1318B6802059
#define INC_025DAA2519304CC3843E1318B6802059

#include <unordered_map>
#include <iostream>
#include "AudioFile.hpp"

namespace speedEngine {
	namespace audioManager {
		typedef enum typeStreams {
			SoundEffect = 1,
			Music = 2
		} typeStream;

		class AudioManager {
		public:

			AudioManager() = default;
			AudioManager(std::unordered_map<std::string, AudioFile &> &lol): _songs(lol) {};

			void addAudio(std::string &audioId, AudioFile &file) {
				_songs.insert({audioId, file});
			};

			void addAudios(std::string &audId, std::string &filepath, typeStream type) {
				if (type) {
					AudioFile l(audId, filepath);
					_songs.insert({audId, l});
					std::cout << audId + " is add" << std::endl;
				}
			};

			void removeAudio(std::string &audioId) {};

			/**
			 *
			 * @param audioId name of this audio
			 * @param vol level of volume you want to set
			 * @return
			 */
			bool setvolume(std::string &audioId, float vol);
			void setSongs(std::unordered_map<std::string, AudioFile &> &songs) {
				_songs = songs;
			};

			void play(std::string &name);
			void pause(std::string name);
			void reset(std::string name);

		private:
			std::unordered_map<std::string , AudioFile &> _songs;

		};

	} // SpeedEngine
} // AudioManager

#endif //INC_025DAA2519304CC3843E1318B6802059
