#include<SFML/Graphics.hpp>
#include<vector>
#include<iostream>
using namespace std;

class squares
{
	private:
		int x;
		int y= 100;


	public:
		sf::RectangleShape tile;
		squares()
		{
			tile.setSize(sf::Vector2f(10,10));
			tile.setFillColor(sf::Color::Green);
			tile.setPosition(sf::Vector2f(x,y));
		//	cout<<x<<std::endl;

          //Set outline of square
          tile.setOutlineThickness(1);
          tile.setOutlineColor(sf::Color::Red);

		}

		//getter
		int get_x()const{return x;}
		int get_y()const{return y;}

		//setter
		void set_x(int horizontal, int vertical)
		{
			x = horizontal;
			y = vertical;
			tile.setPosition(sf::Vector2f(x,y));
		}
};

class grid : public squares
{
private:
public:
	std::vector<squares*> columns;
	grid()
	{
		int x= 0;
		for(int i =0; i<=179; i++)
		{
			for(int j=0; j<=179; j++)
			{
				columns.push_back(new squares);
				columns[x]->set_x(i*10,j*10);
				x++;
			}
		}
	}

};




int main()
{
	int mapsize = 1800;
	sf::RenderWindow window(sf::VideoMode(mapsize, mapsize), "grid_test");
	grid world;
	while(window.isOpen())
	{

		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		for(int i=0; i<32400;i++)
		{
			window.draw(world.columns[i]->tile);
		}

		window.display();

	}

	return 0;
}
