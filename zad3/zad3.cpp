#include <iostream>
#include "Rectangle.h"
#include "tree.h"
#include "Border.h"
#include "Forest.h"

using namespace std;

int Shape::counter = 0;

int main() {

	Rectangle* p = new Rectangle(5, 7, '*', "green");
	Rectangle* k = new Rectangle(5, '*', "yellow");

	Border* b = new Border(*p, 1);

	Tree* c = new Tree(5, '*', "red");

	las.AddShape(p, 2, 2);
	las.AddShape(k, 7, 20);
	las.AddShape(b, 3, 40);

	c->setXY(33, 4);
	las += c;
}