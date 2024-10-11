#pragma once
#include <iostream>
#include "Ticket.h"

using namespace::std;

class Visitor {
private:
	string name;
	string surname;
	int age;
	int money;	
	bool haveTicket;
public:
	int placeInHall;
	Ticket* ticket;
	bool buyInOffice;

	Visitor(string n, string sn, int a, int m);
	Visitor();
	string getName();
	string getSurname();
	int getAge();
	int getMoney();
	bool getHaveTicket();
	int getPlaceInHall();
	bool getBuyInOffice();

	void changeHaveTicket();
	void setTicket(Ticket& ticket);
	void changeMoney(int prise);

};

