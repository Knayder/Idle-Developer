#include "..\include\MainManager.h"

sf::RenderWindow MainManager::window;
sf::ContextSettings MainManager::settings;
void MainManager::start()
{
	/* Load settings from file */
	settings.antialiasingLevel = 8; //From file
	window.create(sf::VideoMode(1280, 720), "Idle Developer", sf::Style::Close, settings);
}
