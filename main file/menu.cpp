#include "menu.hpp"


// helper function for menu.cpp

// when one of the button is selected
void menuButtonPressed(){
	if(menu_buttons[0].onRelease){
		state = GameState::computer;
	}
	else if(menu_buttons[1].onRelease){
		state = GameState::friends;
	}
	else if(menu_buttons[2].onRelease) win.close();
}

void activeMenu() {
	 win.draw(menu_backround);
	
	 menu_buttons[0].activeLogic(menu_buttons);
	 menu_buttons[0].drawB(win, menu_buttons, key_z);
	
	// Handle press case
	menuButtonPressed();
}
