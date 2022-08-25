/*
** EPITECH PROJECT, 18/08/22
** speedEngine
** File description:
** TestScene.cpp
*/

#include "Scene/test/TestScene.hpp"
#include "Error/SceneError.hpp"

speedEngine::test::scene::TestScene::TestScene()
		: speedEngine::scene::Ascene()
{

}

speedEngine::test::scene::TestScene::TestScene(
		const speedEngine::audioManager::AudioManager &audios,
		const speedEngine::asset::AssetManager &assets,
		std::shared_ptr<sf::RenderWindow> window) : Ascene(audios, assets,
                                                           window) {

}

speedEngine::test::scene::TestScene::TestScene(
		std::shared_ptr<sf::RenderWindow> _window) : Ascene(_window) {

}


void speedEngine::test::scene::TestScene::Init()
{
	this->_assets.LoadTexture("logo", IMG_TEST_2);
	this->_background.setTexture(_assets.GetTexture("logo"));
	_background.setOrigin(_background.getGlobalBounds().width / 2, _background.getGlobalBounds().height / 2);
	_background.setPosition(CENTER_WINDOW(_window));
}

void speedEngine::test::scene::TestScene::Draw(float dt)
{
	_window->clear();
	_window->draw(_background);
	_window->display();
}

std::tuple<speedEngine::scene::SCENE_EVENT, speedEngine::scene::Ascene>
speedEngine::test::scene::TestScene::Update(float dt)
{
	float clock = 2.0;

	if (_clock.getElapsedTime().asSeconds() > clock) {
		_isEnd = true;
		return std::make_tuple(speedEngine::scene::END_SCENE, speedEngine::scene::Ascene());
	}
	return std::make_tuple(speedEngine::scene::NOTHING, speedEngine::scene::Ascene());
}
