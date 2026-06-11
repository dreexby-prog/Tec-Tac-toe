#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

extern bool  keyUsed;
class Key{
	public:
		sf::Keyboard::Scan key;
		Key(sf::Keyboard::Scan k): key(k){};
		bool isPressed{};
		bool onPress{};
		
		bool onRelease{};

		void update();
};
