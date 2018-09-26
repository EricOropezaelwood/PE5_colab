#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
	Deer d;
	Turtle t;

	t.Fight(d);
	Eagle e;

	e.Fight(t);	

	return 0;
}
