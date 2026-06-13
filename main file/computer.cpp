#include "computer.hpp"

ComputerState computerState = ComputerState::chooseChar;
x_o computer_xo;

// helper function
void activateSelectable(){
	// set value
	chMintRose[0].direction = Direction::leftRight;
	chMintRose[0].position = {win_width/2 - 200, win_hight/2};
	chMintRose[0].positionDif = {400, 0};
	chMintRose[0].drawB(win, chMintRose, key_z);
	chMintRose[0].activeLogic(chMintRose);
	// set condition
	 
	if(chMintRose[0].onRelease or chMintRose[1].onRelease){
		computerState = ComputerState::gameplay;
	}
	
}

void activateComputer(){
	switch(computerState){
		
		case ComputerState::chooseChar:	
			win.draw(computer_backround1);
			activateSelectable();
			break;
		case ComputerState::gameplay:
			computer_xo.draw(win);
			computer_xo.update(key_z);
			break;

	}

}
