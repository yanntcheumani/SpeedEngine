/*
** EPITECH PROJECT, 09/08/22
** speedEngine
** File description:
** AStreamFile.hpp
*/

#ifndef AStreamFile_hpp
#define AStreamFile_hpp

#include <iostream>
#include "StreamFile.hpp"

namespace speedEngine {
	namespace audioManager {

		class AStreamFile: public StreamFile {
		public:
			AStreamFile(std::string &name, std::string &filepath)
			: StreamFile(), _name(name), _filepath(filepath)  {};

			~AStreamFile() override = default;
			 virtual void setup() {};
			 virtual void setVolume(float vol) {};
			 virtual  void pause() override {};
			 virtual void play() override {};
			 virtual void reset() override {};
		protected:
			std::string &_name;
			std::string &_filepath;
		};
	} // speedEngine
} // audioManager


#endif //AStreamFile.hpp
