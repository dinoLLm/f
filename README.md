# EE205
Creating a square map, the player will take on the role as God. Controlling a group of citizens, two Gods will battle for complete control of the map by utilizing mortality rates and fatality rates as passive expansion and expulsion of their own civilians. Mortality will increase the speed at which the people can spread and take over the map, while mortality acts a currency.

Classes:
God - Can utilize god skills.
God skills - pray, baby make, Nothing.  
Player (1,2) - Keyboard prompts initially seemed easier.
Terrain - different types of terrain allows for certain constrictions on mortality/fatality rates and mobility (Dessert, forest, water mass, mountain)
Citizens - contains civilian data, alive/death currency.

class God {
private:
public:
void set pos (intx, int y); //takes user input of chosen start square
void godskill (); // operates as each god has different skills.
void move(); //to target square}

class Citizens{
private:
int pos.x, pos.y; //current position on map grid
int alive, dead; //keeps tack of mortality and fatalities.
public:
