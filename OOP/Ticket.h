#pragma once
#include <iostream>

using namespace::std;

class Ticket {
private:
	static string time;
	string degree;
	int prise;
	int plase;
	bool available;
public:
	string owner;
	bool isElectronic;

	Ticket(int number, int item);
	Ticket();
	int getPrise();
	string getDegree();
	int getPlase();
	static string getTime();
	bool getAvailable();
	string getOwner();
	bool getFormat();

	void setIsElectronic();
	void setOwner(string name);
	void changeAvailable();
	void setTime(string time);
	void createElectronic();
};

