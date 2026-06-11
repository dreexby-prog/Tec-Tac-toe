#include "image.hpp"

sf::Texture pic1("images/menu_backround.png");
sf::Sprite menu_backround(pic1);

sf::Texture pic2("images/200x100.png");
sf::Sprite button_200x100(pic2);
sf::Texture pic3("images/200x100 selected.png");
sf::Sprite button_200x100s(pic3);

std::vector<sf::Texture> chMint_texture = {sf::Texture("images/choose mint.png"), sf::Texture("images/choose mint selected.png")};

std::vector<sf::Texture> chRose_texture = {sf::Texture("images/choose rose.png"), sf::Texture("images/choose rose selected.png")};

sf::Texture pic4("images/computer backround.png");
sf::Sprite computer_backround1(pic4);
