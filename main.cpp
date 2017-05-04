//Arely De Leon
// CPSC 121-13
//Lisa Rastogi
// CPSC 121-15
#include <iostream>
#include "Toolbox.h"

using namespace std;

int main() {
	Rock r1(9);
	Paper p1(3);
	Scissors s1(2);

	Rock r2(10);
	Paper p2(15);
	Scissors s2(5);

	//I know im throwing the boolian value away
	if(r1.fight(p1)) {

		cout << "Rock beats Paper!" << endl;

	} else {

		cout << "Rock lost..." << endl;

	}

	if(r1.fight(s1)) {

		cout << "Rock beats Scissors!" << endl;

	} else {

		cout << "Rock lost..." << endl;

	}

	if(r1.fight(r2)) {

		cout << "Rock beats Rock!" << endl;

	} else {

		cout << "Rock lost..." << endl;

	}

	if(p1.fight(r1)) {

		cout << "Paper beats Rock!" << endl;

	} else {

		cout << "Paper lost..." << endl;

	}

	if(p1.fight(s1)) {

		cout << "Paper beats Scissors!" << endl;

	} else{

		cout << "Paper lost..." << endl;

	}

	if(p1.fight(p2)) {

		cout << "Paper beats Paper!" << endl;

	} else {

		cout << "Paper lost..." << endl;

	}

	if(s1.fight(r1)) {

		cout << "Scissors beats Rock!" << endl;

	} else {

		cout << "Scissors lost..." << endl;

	}

	if(s1.fight(p1)) {

		cout << "Scissors beats Paper!" << endl;

	} else {

		cout << "Scissors lost..." << endl;

	}

	if(s1.fight(s2)) {

		cout << "Scissors beats Scissors!" << endl;

	} else {

		cout << "Scissors lost..." << endl;

	}

	if (r2.fight(p2)) {

		cout << "Rock beats Paper!" << endl;

	} else {

		cout << "Rock lost..." << endl;

	}

	if(r2.fight(s2)) {

		cout << "Rock beats Scissors!" << endl;

	} else {

		cout << "Rock lost..." << endl;

	}

	if(r2.fight(r1)) {

		cout << "Rock beats Rock!" << endl;

	} else {

		cout << "Rock lost..." << endl;

	}

	if(p2.fight(r2)) {

		cout << "Paper beats rock!" << endl;

	} else {

		cout << "Paper lost..." << endl;

	}

	if(p2.fight(s2)) {

		cout << "Paper beats scissors!" << endl;

	} else {

		cout << "Paper lost..." << endl;

	}


	if(p2.fight(p1)) {

		cout << "Paper beats paper!" << endl;

	} else {

		cout << "Paper lost..." << endl;

	}

	if (s2.fight(r2)) {

		cout << "Scissors beats Rock!" << endl;

	} else {

		cout << "Scissors lost..." << endl;

	}

	if (s2.fight(p2)) {

		cout << "Scissors beats Paper!" << endl;

	} else {

		cout << "Scissors lost..." << endl;

	}

	if(s2.fight(s1)) {

		cout << "Scissors beats Scissors!" << endl;

	} else {

		cout << "Scissors lost..." << endl;

	}
	
	return 0;
}
