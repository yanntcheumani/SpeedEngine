/*
** EPITECH PROJECT, 18/08/22
** speedEngine
** File description:
** SceneError.hpp
*/
#ifndef INC_D08AEB91D13F4B42A7B9F573DE32FB5A
#define INC_D08AEB91D13F4B42A7B9F573DE32FB5A
#include "Exception.hpp"

namespace speedEngine {
	namespace scene {

		class SceneError: public Exception {
		public:
			SceneError(): Exception("error loading texture") {};
			SceneError(std::string &msg): Exception(msg) {};
			SceneError(const char *msg): Exception(msg) {};
		};

	} // speedEngine
} // scene

#endif //INC_D08AEB91D13F4B42A7B9F573DE32FB5A
