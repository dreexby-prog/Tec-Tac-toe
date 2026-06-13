#pragma once
#include "gameScene.hpp"
#include "x_o.hpp"
extern x_o computer_xo;
enum class ComputerState{chooseChar, gameplay};
extern ComputerState computerState;
void activateComputer();
