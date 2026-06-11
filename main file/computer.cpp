#include "computer.hpp"

// helper function
void activateSelectable(){
	chMintRose[0].direction = Direction::leftRight;
	chMintRose[0].position = {win_width/2 - 200, win_hight/2};
	chMintRose[0].positionDif = {400, 0};
	chMintRose[0].drawB(win, chMintRose, key_z);
	chMintRose[0].activeLogic(chMintRose);


}
void activateComputer(){
	win.draw(computer_backround1);
	activateSelectable();
}
