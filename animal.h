#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class animal {
protected:
	int age;
	string name;

public:
	virtual string getRace()=0;
	virtual int getLegs()=0;
	virtual void identify() = 0;
	animal();
	~animal();
	animal(int age, string name);
	string getName();
	int getAge();
	void setName(string name);
	void setAge(int age);

};

#endif // !ANIMAL_H

