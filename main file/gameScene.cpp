#include "gameScene.hpp"
GameState state = GameState::menu;

Key keyx{sf::Keyboard::Scan::Z};
//Button button1(pic2, pic3);
//Selectable menu_button1(pic2, pic3);

void activeState(){
	switch(state){
	
		case GameState::menu:
			activeMenu();
			break;
		case GameState::computer:
			std::cout<<"Computer\n";
			break;
		case GameState::friends:
			std::cout<<"Friend\n";
			break;
	
	}
}
