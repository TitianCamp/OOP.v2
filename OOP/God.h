#pragma once
#include <iostream>
#include "Visitor.h"

using namespace::std;

class God
{
private:
	string name = "Almighty";
public:

	God();

	Visitor createVisitor();
};

