//Arely De Leon
// CPSC 121-13
//Lisa Rastogi
// CPSC 121-15
#include <iostream>
#include "Toolbox.h"

using namespace std;

Tool::Tool(int newStrength, char newType){
	strength = newStrength;
	type = newType;
}


void Tool::setType(char newType) {

	type = newType;

}

void Tool::setStrength(int newStrength) {

	strength = newStrength;

}

char Tool::getType() {

return type;

}

int Tool::getStrength() {

	return strength;

}

int getStrength ();
char getType();


Rock::Rock(int r) : Tool(r, 'r') {
}

bool Rock::fight(Tool enemy){
	int rockStrength;
	if (enemy.getType() == 's'){
		rockStrength = strength*2;
		if (rockStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}
	else if (enemy.getType() == 'p'){
		rockStrength = strength/2;
		if (rockStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}

	else{
		rockStrength = strength;
		if (rockStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}
}
Paper::Paper(int p) : Tool(p, 'p') {
}
bool Paper::fight(Tool enemy){
	int paperStrength;
	if (enemy.getType() == 'r'){
		paperStrength = strength*2;
		if (paperStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}
	else if (enemy.getType() == 's'){
		paperStrength = strength/2;
		if (paperStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}

	else{
		paperStrength = strength;
		if (paperStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}
}
Scissors::Scissors(int s) : Tool(s, 's'){
}
bool Scissors::fight(Tool enemy){
	int scissorStrength;
	if (enemy.getType() == 'p'){
		scissorStrength = strength*2;
		if (scissorStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}
	else if (enemy.getType() == 'r'){
		scissorStrength = strength/2;
		if (scissorStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}
	else{
		scissorStrength = strength;
		if (scissorStrength > enemy.getStrength()){

			return true;
		}
		else{

			return false;
		}
	}
}
