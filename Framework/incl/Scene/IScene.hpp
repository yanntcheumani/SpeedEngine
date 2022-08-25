/*
** EPITECH PROJECT, 02/08/22
** speedEngine
** File description:
** State.hpp
*/
#ifndef INC_C3D2BCC7B62A4D3A8FEC32B27C74A27E
#define INC_C3D2BCC7B62A4D3A8FEC32B27C74A27E

namespace speedEngine
{
	namespace scene {
		typedef enum scene_event_s {
			END_SCENE = 0,
			CHANGE_SCENE = 1,
			NOTHING = 2
		} SCENE_EVENT;

		class IScene {
		public:
			virtual ~IScene() = default;
			virtual void Init() = 0;

			virtual void HandleInput() = 0;

			virtual void Draw(float dt) = 0;

			virtual void Pause() = 0;

			virtual void Resume() = 0;
		};
	};

} // SpeedEngine

#endif //INC_C3D2BCC7B62A4D3A8FEC32B27C74A27E
