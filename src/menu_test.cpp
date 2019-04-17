#include <SFML/Graphics.hpp>
     using namespace sf;
#include <iostream>

//Range of options in menu
#define STT 0
#define END 2

int main() {
     //create the window
     RenderWindow window(VideoMode(800, 600), "Test");
     Event event;

     //Create menu button shapes
     RectangleShape play_rect(Vector2f(400.f, 100.f));
     RectangleShape opt_rect(Vector2f(400.f, 100.f));
     RectangleShape exit_rect(Vector2f(400.f, 100.f));

     //Set button texture/color
     play_rect.setFillColor(Color(100, 250, 50));
     opt_rect.setFillColor(Color(100, 250, 50));
     exit_rect.setFillColor(Color(100, 250, 50));

     //Set button location
     play_rect.setPosition(200,100);
     opt_rect.setPosition(200,220);
     exit_rect.setPosition(200,340);

     //Enumerator to keep track of button position
     enum select { start, options, exit };
     select selected = start;
     int n = 0;


     //window loop
     while(window.isOpen()) {
          //Check & process window events
          while(window.pollEvent(event)) {
               if(event.type == Event::KeyPressed) {
                    if(event.key.code == Keyboard::Return) {
                         switch(selected) {
                              case start:
                                   //start the game
                                   std::cout << "Game started" << std::endl;
                                   break;
                              case options:
                                   //Do nothing for now
                                   std::cout <<"Option selected" <<std::endl;
                                   break;
                              case exit:
                                   //Exit the application
                                   std::cout << "Exiting" <<std::endl;
                                   window.close();
                                   break;
                              default: break;
                         }
                    }
               //If "Down" arrow key pressed, scroll down menu
               if(event.key.code == Keyboard::Down) {
                    if(selected < exit) {
                         n+=1;
                         selected = static_cast<select>(n); }
               }
               //If "Up" arrow key pressed, scroll up menu
               if(event.key.code == Keyboard::Up) {
                    if(selected > start) {
                         n -=1;
                         selected = static_cast<select>(n); }
               }
               //If Close pressed, exit game               
               else if(event.type == Event::Closed) {
                    window.close();
                    }

               }
                    }
          //Update option menu based on key event
                    
          switch(selected) {
               case start: 
                         play_rect.setFillColor(Color(250, 0, 50));
                         opt_rect.setFillColor(Color(100, 250, 50));
                         exit_rect.setFillColor(Color(100, 250, 50));
                         break;
               case options:
                         play_rect.setFillColor(Color(100, 250, 50));
                         opt_rect.setFillColor(Color(250, 0, 50));
                         exit_rect.setFillColor(Color(100, 250, 50));
                         break;
               case exit:
                         play_rect.setFillColor(Color(100, 250, 50));
                         opt_rect.setFillColor(Color(100, 250, 50));
                         exit_rect.setFillColor(Color(250, 0, 50));
                         break;
               default: break;
          }


          //Clear and then redraw window
          window.clear();
          window.draw(play_rect);
          window.draw(opt_rect);
          window.draw(exit_rect);
          window.display();
     }

     return 0;
}
