
#include <SFML/Graphics.hpp>
#include <iostream>
#include <map>

#include "texture.hpp"


//Individual map tiles used by the game, contains information such as: total population of tile, tile multipliers, etc.
class tile() {
     public:
          //constructor
          tile();

          //Functions required by inherited tile objects


     private:
          //Graphic related variables
          //Coordinates
          unsigned x_coord;
          unsigned y_coord;
          //Tile shape
          RectangleShape t;


          //Unique tile identifier
          unsigned tile_no;

          //map of faction population of tile
          std::map pop<std::string, unsigned> pop;

          //Tile multipliers
          float grow_rate;
          float death_rate;
};




