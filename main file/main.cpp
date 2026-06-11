#include <iostream>

#include <SFML/Graphics.hpp>
#include "a.hpp"
#include <algorithm>
#include "gameScene.hpp"

int main(){
	win.setFramerateLimit(60);
        while(win.isOpen()){
                while(const std::optional event = win.pollEvent()){
                        if(event->getIf<sf::Event::Closed>()){
                                win.close();
                        }
			if(auto* key = event->getIf<sf::Event::KeyPressed>()){
				//std::cout<<"\n";
			}

                }
               
                sf::View view(sf::FloatRect({0.f, 0.f}, {win_width, win_hight}));
                win.setView(view);
                
		win.clear();
		
		// DRAW HERE
		
		// active state of the game
		activeState();
		
                win.display();
        }
}

