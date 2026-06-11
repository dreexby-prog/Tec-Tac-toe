#pragma once
#include <SFML/Graphics.hpp>
#include "a.hpp"
#include <iostream>
#include "key.hpp"
class Selectable{
	private:
		bool onPress{};
		bool onRelease{};

	public:
		sf::Sprite sprite_idle;
		sf::Sprite sprite_selected;

		Selectable(sf::Texture& idle, sf::Texture& selected): sprite_idle(idle), sprite_selected(selected){};
		sf::Vector2f position = {win_width/2, win_hight/2 - 200};

		bool pressed{}; // more likely don't  need it
		bool released{};

		bool selected{};

		void update(Key& k);
		void draw(sf::RenderWindow& win);
	private:
		sf::Vector2f size;
};
