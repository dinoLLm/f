#ifndef GAME_HPP
#define GAME_HPP

#include <stack>
     using namespace std;
#include "SFML/Graphics.hpp"
     using namespace sf;
#include "state_man.hpp"
#include <string>

class GameState;
//Manages window as well as states

//enumerator of game types (used for debugging)
enum state { Start, Play, Pause };

class Game {
     public:
          //Constructor and destructor
          Game();
          ~Game();

          //Functions for manipulating current states
          void pushState(GameState* state);
          void popState();

          //Returns enumerator with current state
          state viewState();

          //sfml window
          sf::RenderWindow window;
          sf::Event event;

     private:
          stack<GameState*> states;
          state current;
};
           
#endif
