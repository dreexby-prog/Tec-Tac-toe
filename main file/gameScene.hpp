#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "image.hpp"
#include "a.hpp"
#include "buttons.hpp"
#include "key.hpp"
#include "buttonVar.hpp"
enum class  GameState {menu, computer, friends};

extern GameState state;

void activeState();
