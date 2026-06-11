#include "buttons.hpp"

//Selectable menu_button1(pic2, pic3);
//Selectable menu_button2(pic2, pic3);
//Selectable menu_button3(pic2, pic3);
void Button::activeLogic(std::vector<Button>& buttons){
	up.update();
	down.update();
	switch(direction){
		case Direction::upDown:
			//std::cout<<"entered";
			if(up.onPress and current > 0){
				perCurrent = current;
				current--;
			
			} 
			if(down.onPress and current < buttons.size() - 1){
				perCurrent = current;
				current++;
			}
			//std::cout<<current<<'\n';
			buttons[perCurrent].selected = false;
			buttons[current].selected = true;
			break;
	}
}

void Button::drawB(sf::RenderWindow& win, std::vector<Button>& buttons, Key &key){	
	for(int i = 0; i<buttons.size(); i++){
		buttons[i].position = {position.x + positionDif.x * i, position.y + positionDif.y * i};
		buttons[i].draw(win);
		buttons[i].update(key);
	
	}	
	

}
