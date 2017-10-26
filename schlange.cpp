#include "schlange.h"
#include <iostream>
using namespace std;


schlange::schlange(int age, string name) {
	this->age = age;
	this->name = name;
}

int schlange::getLegs() {
	return beine;
}

string schlange::getRace() {
	return race;
}

void schlange::identify() { 
	cout << getName() << " ist eine " << getRace() << " hat " << getLegs() << " Beine und ist " << getAge() << " Jahr(e) alt" << endl;
}
