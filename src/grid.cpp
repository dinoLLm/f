#include"grid.hpp"
#include<iostream>
using namespace std;
// constructs and object with a rectangle object
squares::squares()
{
	tile.setSize(sf::Vector2f(100,100));
	tile.setFillColor(sf::Color::Green);
	tile.setPosition(sf::Vector2f(x,y));
//	cout<<x<<std::endl;

}
//returns the x and y coordinate of the tile
int squares::get_x()const{return x;}
int squares::get_y()const{return y;}


//sets position of the tile
void squares::set_x(int horizontal, int vertical)
{
	x = horizontal;
	y = vertical;
	tile.setPosition(sf::Vector2f(x,y));
}
//creates an object with squres stored as vector
map::map()
{
	int x = 0;
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
