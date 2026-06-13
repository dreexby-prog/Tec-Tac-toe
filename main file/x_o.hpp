#pragma once
#include <SFML/Graphics.hpp>
#include "image.hpp"
#include "keys.hpp"
#include <vector>
class x_o{


	private:
		// place
		int add = 270;
		int bound_min = 45;
		int bound_max = 2*add + bound_min;
		sf::Vector2f position = {45, 45};
		sf::Vector2f origin;
		
		// sprites
		sf::Sprite x_sprite;
		sf::Sprite o_sprite;
		sf::Sprite backround; // 800 x 800
		sf::Sprite selection_sprite;

	public:
		x_o() : x_sprite(x_texture), o_sprite(o_texture), backround(x_o_backround_texture), selection_sprite(selection_texture){
			//origin = {o_sprite.getGlobalBounds().size.x/2, o_sprite.getGlobalBounds().size.y/2};
			//x_sprite.setOrigin(origin);
			//o_sprite.setOrigin(origin);
			//selection_sprite.setOrigin(origin);
		};
		bool x_turn = true;

		std::vector<char> board_value{9, ' '};

		void update(Key &key);
		void draw(sf::RenderWindow &);
};
