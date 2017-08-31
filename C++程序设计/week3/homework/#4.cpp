#include <iostream>
using namespace std;


Class Warcraft{
private:
	int incident;
	int life;
	int dragon_life, ninja_life, iceman_life, lion_life, wolf_life;
	
public:
	Warcraft(int incident_parameter, int life_parameter,
	         int dragon_life_parameter, int ninja_life_parameter,
			 int iceman_life_parameter, int lion_life_parameter, 
			 int wolf_life_parameter);  // 构造函数，没有返回值，void也不行 
	
};

Warcraft::Warcraft(int incident_parameter, int life_parameter,
	         	   int dragon_life_parameter, int ninja_life_parameter,
			       int iceman_life_parameter, int lion_life_parameter, 
			       int wolf_life_parameter){
	incident = incident_parameter; life = life_parameter;
	dragon_life = dragon_life_parameter; ninja_life = ninja_life_parameter;
	iceman_life = iceman_life_parameter; lion_life = lion_life_parameter;
	wolf_life = wolf_life_parameter;
}


