#include "headers.h"
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

int main()
{
	bool first_start = true;
	bool playing = true;
	switch(main_menu()){
		case 1:
			floor_build(floor_size());
			draw(floor_grid2);
			return 0;
		case 2:
			std::cout << "This will be an options menu in the future\n";
			return 0;
		case 3:
			std::cout << "Displays help section.\n";
			return 0;
		case 4:
			return 0;
	}
	return 0;
}