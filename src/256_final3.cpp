//============================================================================
// Name        : 256_final3.cpp
//There are 4 classes;
//    • Abstract Base class: Dessert  - nobody likes generic desserts so you cannot instantiate this class.
//    • ChocChipCookie- a class that derives from Dessert
//    • Pecanbar - a class that derives from Dessert
//    • Tupperware - a class that can hold a user specified number of Desserts, it however has only one vector;
//
//	TODO Please provide .cpp implementations for Dessert, ChocChipCookie, PecanBar and Tupperware

#include <iostream>
using namespace std;

#include "Dessert.h"
#include "ChocChipCookie.h"
#include "PecanBar.h"
#include "Tupperware.h"

int main() {

	Tupperware t;
	bool badded = t.AddDessert(new ChocChipCookie);	//note there are no arguments to constructor
	t.AddDessert(new ChocChipCookie(2));
	t.AddDessert(new ChocChipCookie(3));
	t.AddDessert(new PecanBar(1));
	badded = t.AddDessert(new PecanBar(2));
	t.ListDesserts();
	t.clear();

	return 0;
}
