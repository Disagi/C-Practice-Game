#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>

int main_menu()
{
	int p_choice = 0;
	std::cout << "Welcome to my early build for generating rooms. \n Navigate the menu using the options below:\n" <<
	"1: Start Buid\n" << "2: Options\n" << "3: Help\n" << "4: Exit\n";
	std::cin >> p_choice;
	return p_choice;
}