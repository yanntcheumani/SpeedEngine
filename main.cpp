#include <iostream>
#include "Scene/test/TestScene.hpp"
#include "Scene/SceneManager.hpp"

int run(std::shared_ptr<sf::RenderWindow>& window)
{
	speedEngine::scene::SceneManager manager;
	manager.setWindow(window);
	manager.addState(speedEngine::scene::SceneRef(new speedEngine::test::scene::TestScene(window)));
	while (window->isOpen())
	{
		manager.ProcessStateChanges();
		if (manager.GetActiveState() == nullptr) {
			window->close();
			return 0;
		}
		auto loss = manager.GetActiveState()->Update(0);
		if (std::get<0>(loss) == speedEngine::scene::CHANGE_SCENE) {
			manager.RemoveState();
		}
		manager.GetActiveState()->Draw(0);
	}
	return 0;
}

int main()
{
	speedEngine::audioManager::AudioManager manager;
	std::string name = "test";
	std::string filepath = "/home/speedy/perso_project/speedEngine/wavSound1.wav";

	std::shared_ptr<sf::RenderWindow> window( new sf::RenderWindow(sf::VideoMode(800, 600), "SFML window", sf::Style::Default));
	run(window);

	return EXIT_SUCCESS;
}
