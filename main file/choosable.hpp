#pragma once
#include "selectable.hpp"
#include <vector>
#include "key.hpp"
//#include "image.hpp"
//extern Selectable  menu_button1;
//extern Selectable menu_button2(pic2, pic3);
//extern Selectable menu_button3(pic2, pic3);

enum class Direction{upDown, leftRight, all};
class Button : public Selectable{

	public:	
		Button(sf::Texture& idle, sf::Texture& selected): Selectable(idle, selected){};
		
		Direction direction = Direction::upDown;

		//active the condition of buttons;
		void activeLogic(std::vector<Button> &);
		void drawB(sf::RenderWindow&, std::vector<Button> &, Key &);
		
		sf::Vector2f positionDif = {0, 150 };	
	private:
		int current = 0; // current selected
		int perCurrent = -1;
		
		Key up{sf::Keyboard::Scan::W};
		Key down{sf::Keyboard::Scan::S};
		//Key left{sf::Keyboard::Scan::D};
		//Key right{sf::Keyboard::Scan::A};
		
		
		
};
