//Header file for game state manager
#ifndef GAME_STATE_HPP
#define GAME_STATE_HPP

#include <SFML/Graphics.hpp>
#include "game.hpp"

class Game;

class GameState {
     public:

          Game* game;
          virtual void draw() = 0;
          virtual void update() = 0;
          virtual void handleInput() = 0;
};

#endif
