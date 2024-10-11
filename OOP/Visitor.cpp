#include "Visitor.h"
#include "Ticket.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace::std;

Visitor::Visitor(string n, string sn, int a, int m): 
	name(n), surname(sn), age(a), money(m), haveTicket(false), placeInHall(0), buyInOffice(a % 2) {};

Visitor::Visitor() :
	name("Mike"), surname("Leshchuk"), age(25), money(500), haveTicket(false), placeInHall(0), buyInOffice(0) {};

string Visitor::getName() { return name; };

string Visitor::getSurname() { return surname; };

int Visitor::getAge() { return age; };

int Visitor::getMoney() { return money; };

bool Visitor::getHaveTicket() { return haveTicket; };

int Visitor::getPlaceInHall() { return placeInHall; };

bool Visitor::getBuyInOffice() { return buyInOffice; };

void Visitor::changeHaveTicket() { haveTicket ? this->haveTicket = false : this->haveTicket = true; };

void Visitor::setTicket(Ticket& ticket) { this->ticket = &ticket; };

void Visitor::changeMoney(int prise) { money -= prise; };

