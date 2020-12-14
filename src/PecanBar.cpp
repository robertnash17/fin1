#include "PecanBar.h"
#include "Tupperware.h"
#include <string>

/**
	 constructs object
 *
 * numb: which number dessert this is
 */
PecanBar::PecanBar(int numb):Dessert(numb){
	PecanBar::taste();
}

PecanBar::~PecanBar(){
}

/**
 * if numb is 3 outputs "Pecan Bar #3"
 *
 */
std::string PecanBar::taste(){
	std::string message = "Pecan Bar #"+ std::to_string(numb);
	return message;
}
