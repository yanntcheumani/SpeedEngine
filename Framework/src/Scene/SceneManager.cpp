/*
** EPITECH PROJECT, 02/08/22
** speedEngine
** File description:
** StateMachine.cpp
*/
#include "Scene/SceneManager.hpp"

namespace speedEngine {
	namespace scene {
		void SceneManager::addState(SceneRef newScene, bool isReplacing) {
			this->_isAdding = true;
			_isReplacing = isReplacing;
			_newScene = std::move(newScene);
		}

		void SceneManager::RemoveState() {
			_isRemoving = true;
		}

		void SceneManager::ProcessStateChanges() {

			if ((_isRemoving && !_scenes.empty()) ||
				(!_scenes.empty() && _scenes.top()->isIsEnd())) {
				_scenes.pop();
				if (!_scenes.empty()) {
					this->_scenes.top()->Resume();
				}
				_isRemoving = false;
			}
			if (_isAdding) {
				if (!_scenes.empty()) {
					if (_isReplacing) {
						this->_scenes.pop();
					} else {
						_scenes.top()->Pause();
					}
				}
				_scenes.push(std::move(_newScene));
				_scenes.top()->Init();
				_isAdding = false;
			}
		}

		SceneRef SceneManager::GetActiveState() {
			if (_scenes.empty())
				return nullptr;
			return _scenes.top();
		}

		void SceneManager::setWindow(
				 std::shared_ptr<sf::RenderWindow> &window) {
			_window = window;
		}
	}
} // SpeedEngine