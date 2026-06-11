#include "gameScene.hpp"
GameState state = GameState::menu;

Key keyx{sf::Keyboard::Scan::Z};
//Button button1(pic2, pic3);
//Selectable menu_button1(pic2, pic3);

void activeState(){
	switch(state){
	
		case GameState::menu:
			//std::cout<<"Menu";
			win.draw(menu_backround);
				
			menu_button[0].drawB(win, menu_button, keyx);
			menu_button[0].activeLogic(menu_button);
			//menu_button[0].update(keyx);
			//keyx.update();
			if(menu_button[0].released) std::cout<<"entered\n" ;

			//menu_button1.selected = true;
			//menu_button1.update(key);
			//menu_button1.draw(win);
			//button1.draw(win);
			break;
		case GameState::computer:
			//std::cout<<"Computer";
			break;
		case GameState::friends:
			//std::cout<<"Friend";
			break;
	
	}
}
