#include "Manager.h"
#include "Visitor.h"
#include "Ticket.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace::std;

Manager::Manager(string n, string sn, int a) :name(n), surname(sn), age(a) {};

Manager::Manager(int a) : name(Manager().getName()), surname(Manager().getSurname()), age(a) {};

Manager::Manager() : name("Mike"), surname("Leshchuk"), age(18) {};

string Manager::getName() { return name; };

string Manager::getSurname() { return surname; };

int Manager::getAge() { return age; };

vector<Ticket> Manager::createTickets(int volume) {
	vector<Ticket> tickets;
	for (int i = 0; i < volume; i++) {
		Ticket ticket(volume, i);
		tickets.push_back(ticket);
	};
	tickets[0].setTime("20:30 08.12.2024");
	return tickets;
};

void Manager::writeInFile(vector<Visitor>& visitors) {
	ofstream file("Visitors.txt");
	for (auto& visitor : visitors) {
		if (visitor.getHaveTicket())
			file << visitor.getName() << " " << visitor.getSurname() << " " << visitor.getAge() << " years-old. Place: " 
			<< visitor.getPlaceInHall() << " in hall. " << ((!visitor.getBuyInOffice()) ? "Has an electronic ticket" : "") << endl;
	}
	file.close();
};

void Manager::sellTicket(Visitor& visitor, Ticket& ticket) {
	if (visitor.getHaveTicket()) { cout << "Ticket is already bought!" << endl; return; }
	if (!ticket.getAvailable()) { cout << "This ticket is already bought by someone else!" << endl; return; }
	string VIP = "VIP";
	if (visitor.getMoney() >= ticket.getPrise()) {
		visitor.changeMoney(ticket.getPrise());
		ticket.changeAvailable();
		visitor.changeHaveTicket();
		visitor.placeInHall = ticket.getPlase();
		ticket.setOwner(visitor.getName());
		visitor.setTicket(ticket);
		if (!visitor.getBuyInOffice()) { ticket.setIsElectronic(); }
		cout << this->getName() << " sell ticket to " << visitor.getName() << endl;
	}
	else if (ticket.getDegree() == VIP) { cout << "You don't have enough money! You can choose a standart ticket." << endl; }
	else { cout << "You don't have enough money!" << endl; }
};

Manager::~Manager() { cout << "\nManager died!" << endl; };