#include <windows.h>
#include "mainMenu.cpp"
#include "floor.cpp"
#include "rooms.cpp"
#include "hallways.cpp"

int main_menu();
int hallways(int room_size);
int room_size();
void draw(grid);
void buildWalls(std::vector<char>& grid);
std::vector <char> build(unsigned int size);
char size() ;