#ifndef SCHLANGE_H
#define SCHLANGE_H
#include"animal.h"

class schlange :public animal {
private:
	int beine = 0;
	string race = "snake";


public:
	string getRace();
	int getLegs();
	void identify();
	schlange(int age, string name);
};

#endif // !SCHLANGE_H

