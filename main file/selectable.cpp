#include "selectable.hpp"
void Selectable::update(Key& key){
	key.update();

	onRelease = false;
	onPress = false;

	// ------------------------

	if(selected and key.onPress){
		onPress = true;
		//std::cout<<"pressed!!\n";
	}
	
	// so when released the button is going to its work, not at the pressing
	// useful to be able to hold the button before it enters new event
	if(selected and key.onRelease){
		onRelease = true;
		//std::cout<<"released\n";
	}

}
void Selectable::draw(sf::RenderWindow& win){
	size = {sprite_idle.getGlobalBounds().size.x, sprite_idle.getGlobalBounds().size.y};
	sprite_idle.setOrigin({size.x/2, size.y/2});
	sprite_selected.setOrigin({size.x/2, size.y/2});

	sprite_idle.setPosition(position);
	sprite_selected.setPosition(position);
	
	if(selected) win.draw(sprite_selected);
	else win.draw(sprite_idle);
	//win.draw(sprite_idle);
}
