#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Figures.h"
#include "Trap.h"

#include <iostream>
using namespace std;
int main()
{
	
	Rectangle rect(3, 4, "ABCD");

	rect.displayRect();
	rect.set_ab(3.5, 5.6);
	rect.displayRect();

	
	Circle circle(3, "O");
	circle.displayCircle();
	circle.setR(9);
	circle.displayCircle();

	
	Triangle tr(3, 4, 5, "ABC");
	tr.displayTrgl();
	Trap t(3, 7, 1, 3, "ABCD");
	t.displaytrap();
}

