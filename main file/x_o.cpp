#include "x_o.hpp"

void x_o::draw(sf::RenderWindow& win){
	selection_sprite.setPosition(position);
	win.draw(backround);
	win.draw(selection_sprite);
}

void x_o::update(Key& key){
	for(int i = 0; i < 4; i++){
		key_wasd[i].update();
	}
	//bool rightLeft = position.y;
	// moving around
	if(key_wasd[0].onPress and position.y > bound_min and position.y <= bound_max){
		position.y -= add;
	}
	else if(key_wasd[1].onPress and position.y >= bound_min and position.y < bound_max){
		position.y += add;
	}
	else if(key_wasd[2].onPress and position.x >= bound_min and position.x < bound_max){
		position.x += add;
	}
	else if(key_wasd[3].onPress and position.x > bound_min and position.x <=bound_max){
		position.x -= add;
	}
}
