#include"grid.hpp"
#include<iostream>
using namespace std;

squares::squares()
{
	tile.setSize(sf::Vector2f(100,100));
	tile.setFillColor(sf::Color::Green);
	tile.setPosition(sf::Vector2f(x,y));
//	cout<<x<<std::endl;

}
//getter
int squares::get_x()const{return x;}
int squares::get_y()const{return y;}

//setter
void squares::set_x(int horizontal, int vertical)
{
	x = horizontal;
	y = vertical;
	tile.setPosition(sf::Vector2f(x,y));
};

map::map()
{
	int x= 0
	for(int i =0; i<=16; i++)
	{
		for(int j=0; j<=16; j++)
		{
			columns.push_back(new squares);
			columns[x]->set_x(i*100,j*100);
			x++;
		}
	}
}
