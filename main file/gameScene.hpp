#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "image.hpp"
#include "a.hpp"
#include "buttonVar.hpp"
#include "keys.hpp"
#include "menu.hpp"
#include "computer.hpp"

enum class  GameState {menu, computer, friends};

extern GameState state;

void activeState();
