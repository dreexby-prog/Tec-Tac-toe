#include "choosable.hpp"

//Selectable menu_button1(pic2, pic3);
//Selectable menu_button2(pic2, pic3);
//Selectable menu_button3(pic2, pic3);
void Choosable::activeLogic(std::vector<Choosable>& buttons){
	up.update();
	down.update();
	right.update();
	left.update();
	switch(direction){
		case Direction::upDown:
			//std::cout<<"entered";
			if(up.onPress and current > 0){
				perCurrent = current;
				current--;
			
			} 
			else if(down.onPress and current < buttons.size() - 1){
				perCurrent = current;
				current++;
			}
			break;
		case Direction::leftRight:
			if(right.onPress and current > 0){
				perCurrent = current;
				current--;
			}
			else if(left.onPress and current < buttons.size()-1){
				perCurrent = current;
				current++;
			}
	}
	buttons[perCurrent].selected = false;
	buttons[current].selected = true;
}

void Choosable::drawB(sf::RenderWindow& win, std::vector<Choosable>& buttons, Key &key){	
	for(int i = 0; i<buttons.size(); i++){
		buttons[i].position = {position.x + positionDif.x * i, position.y + positionDif.y * i};
		buttons[i].draw(win);
	
	}
	buttons[current].update(key);		
	

}
