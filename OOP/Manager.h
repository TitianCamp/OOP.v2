#pragma once
#include <iostream>
#include <vector>
#include "Ticket.h"
#include "Visitor.h"

using namespace::std;

class Manager {
private:
	string name;
	string surname;
	int age;
public:
	
	Manager(string n, string sn, int a);
	Manager(int a);
	Manager();
	string getName();
	string getSurname();
	int getAge();

	vector<Ticket> createTickets(int volume);
	void writeInFile(vector<Visitor>& visitors);
	void sellTicket(Visitor& visitor, Ticket& ticket);

	~Manager();
};
