/*
** EPITECH PROJECT, 09/08/22
** speedEngine
** File description:
** StreamFile.hpp
*/
#ifndef INC_194D24E3F2C5430583FF7609E70814D3
#define INC_194D24E3F2C5430583FF7609E70814D3

namespace speedEngine {
	namespace audioManager {

		class StreamFile {
		public:
			StreamFile() = default;
			virtual ~StreamFile() = default;

			virtual void setup() {};

			virtual void setVolume(float vol) {};

			virtual void pause() {};

			virtual void play() {};

			virtual void reset() {};
		};
	} // speedEngine
} // audioManager

#endif //INC_194D24E3F2C5430583FF7609E70814D3
