#include "Ticket.h"
#include <iostream>

using namespace::std;

string Ticket::time = "00:00 01.01.1990";

Ticket::Ticket(int number, int item) :
	plase(item + 1), available(true), owner("None"), isElectronic(false) {
	int VIPTicket = int(number * 0.3);
	string VIP = "VIP", standart = "standart";
	if (item < (number - VIPTicket)) {
		this->degree = standart;
		this->prise = 50;
	}
	else {
		this->degree = VIP;
		this->prise = 100;
	}
};

Ticket::Ticket() {};

int Ticket::getPrise() { return prise; };

string Ticket::getDegree() { return degree; };

int Ticket::getPlase() { return plase; };

string Ticket::getTime() { return time; };

bool Ticket::getAvailable() { return available; };

string Ticket::getOwner() { return owner; };

bool Ticket::getFormat() { return isElectronic; };

void Ticket::setIsElectronic() { this->isElectronic = true; };

void Ticket::setOwner(string name) { this->owner = name; };

void Ticket::changeAvailable() { available ? this->available = false: this->available = true; };

void Ticket::setTime(string time) { this->time = time; };

void Ticket::createElectronic() { this->isElectronic = true; };
