//Main file for testing

#include "main_menu.hpp"

int main() {
     //Create the window
//     RenderWindow window(VideoMode(800, 600), "TEST");
//     Event event;

     //Pointer to current game state (always starts at Main Menu)
     Main_Menu main_menu;
     Main_Menu* c_state = &main_menu;
     Game* game = c_state->game;

     //Run until window closes
     while(game->window.isOpen()) {
          //Read event
          while(game->window.pollEvent(game->event)) {
               c_state->handleInput();
          }
          //Update graphics accordingly
          c_state->update();
          //Redraw screen
          c_state->draw();
          //Push buffer to screen
          game->window.display();
     }
}


