#include <SFML/Graphics.hpp>
#include "bruh.h"
#include "settings.h"
#include "BAT.h"
using namespace sf;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(width, height), title);
	Bat bat;
	batInit(bat);
	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen()) {
		checkEvents(window);
		updateGame(bat);
		checkCollision();
		drawGame(window, bat);
	}
	return 0;
}