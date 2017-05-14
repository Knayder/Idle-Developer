#include "../pre/sfml.h"

class MainManager final {
	static sf::RenderWindow window;
	static sf::ContextSettings settings;
public:
	MainManager() = delete;
	MainManager(const MainManager&) = delete;
	void operator=(const MainManager&) = delete;

	static void start();
};