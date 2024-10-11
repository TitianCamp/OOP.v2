#include "God.h"
#include <iostream>

using namespace::std;

God::God() {};

Visitor God::createVisitor() {
	cout << name << " God came from Heaven! You have the honor to select information for a new visitor!" << endl;
	string name, surname;
	int age, money;
	cin >> name >> surname >> age >> money;
	Visitor visitor(name, surname, age, money);
	cout << name << " was created by Almighty God!" << endl;
	return visitor;
}