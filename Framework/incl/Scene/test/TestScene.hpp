/*
** EPITECH PROJECT, 18/08/22
** speedEngine
** File description:
** TestScene.hpp
*/
#ifndef INC_1EB714D3B5064FDDAAE44E33A0E6B442
#define INC_1EB714D3B5064FDDAAE44E33A0E6B442
#include "Scene/Ascene.hpp"

#define IMG_TEST_2 "../Framework/ressource/test.jpg"
#define CENTER_WINDOW(a) a->getSize().x / 2, a->getSize().y / 2

namespace speedEngine {
	namespace test {
		namespace scene {
			class TestScene : public speedEngine::scene::Ascene {
			public:
				TestScene();
				explicit TestScene(std::shared_ptr<sf::RenderWindow> _window);

				TestScene(const audioManager::AudioManager &audios,
				       const asset::AssetManager &assets, std::shared_ptr<sf::RenderWindow> window);

				void Init() override;
				void Draw( float dt) override;
				std::tuple<speedEngine::scene::SCENE_EVENT, speedEngine::scene::Ascene> Update( float dt) final;
			private:
				sf::Clock _clock;
			};
		};
	};
}

#endif //INC_1EB714D3B5064FDDAAE44E33A0E6B442
