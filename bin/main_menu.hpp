#ifndef MAIN_MENU_HPP
#define MAIN_MENU_HPP

#include "game.hpp"
#include "state_man.hpp"
#include <SFML/Graphics.hpp>
     using namespace sf;
#include <iostream>

class Main_Menu : public GameState 
{
     public:
          //constructor
          Main_Menu();

          //Inherited virtual functions
          void draw();
          void update();
          void handleInput();

     private:
       //menu button shapes
       RectangleShape play_rect;
       RectangleShape opt_rect;
       RectangleShape exit_rect;

       //Enumerator to keep track of button position
       enum select { start, options, exit };
       select selected;
       int n;
};


#endif
