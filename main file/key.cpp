#include "key.hpp"
void Key::update() {
    bool currentlyPressed = sf::Keyboard::isKeyPressed(key);

    onPress = false;
    onRelease = false;

    if (currentlyPressed && !isPressed) {
      	//std::cout << "pressed\n";
        onPress = true;
    }
    else if (!currentlyPressed && isPressed) {
       // std::cout << "released\n";
        onRelease = true;
    }

    isPressed = currentlyPressed;
}

