#include "animal.h"

animal::animal() {
	this->age = 0;
	this->name = "leer";
}

animal::animal(int age, string name) {
	this->age = age;
	this->name = name;
}

animal::~animal() {

}

int animal::getAge() {
	return age;
}

void animal::setAge(int age) {
	this->age = age;
}

string animal::getName() {
	return name;
}

void animal::setName(string name) {
	this->name = name;
}
