#include <iostream>
#include <ctime> 
#include <cstdlib> 
#include <string>
using namespace std;
int inventory[6];
int num;
int main() {
	srand(time(NULL));
	for (int i = 0; i < 7; i++) {
		int num = rand() % 10 + 1;
		
	inventory[i] = num;
	}
	cout << "Agility " << inventory[0] << endl;
	cout << "Strength " << inventory[1] << endl;
	cout << "Perception " << inventory[2] << endl;
	cout << "Endurance " << inventory[3] << endl;
	cout << "Charisma " << inventory[4] << endl;
	cout << "Intelligence " << inventory[5] << endl;
	cout << "Luck " << inventory[6] << endl;
}