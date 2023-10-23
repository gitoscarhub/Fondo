#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

using namespace sf;
Texture fondo;
Sprite bkg;

int main(){

	fondo.loadFromFile("fondo.jpg");

		bkg.setTexture(fondo);
		bkg.setPosition(0, 0);
		sf::RenderWindow App(sf::VideoMode(800, 600, 32),
			"Fondo vs Ventana");

		while (App.isOpen()){

			App.clear();
			App.draw(bkg);
			App.display();
		
		}
		return 0;
	
}