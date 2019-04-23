#include "state_man.hpp"
#include "texture.hpp"

#ifndef PLAY_HPP
#define PLAY_HPP

//Game state, this class inherits from GameState and is the base for all gameplay related states
class Play() : GameState() {
     public:
          //Constructor
          Play();

          //Inherited graphic functions
          void draw();
          void update();
          void handleInput();

     private:
};

#endif
