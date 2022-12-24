#include <SFML/Graphics.hpp>
#include "bruh.h"
#include "settings.h"
#include "BAT.h"
using namespace sf;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(width, height), title);
	Bat bat;
	batInit(bat);
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen()) {
		checkEvents(window);
		updateGame(bat);
		checkCollision();
		drawGame(window, bat);
	}
	return 0;
}