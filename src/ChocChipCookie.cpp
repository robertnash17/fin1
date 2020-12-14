#include "ChocChipCookie.h"
#include "Tupperware.h"



/**
	constructs object
 *
 * 	numb: which number dessert this is
 */
ChocChipCookie::ChocChipCookie(int numb):Dessert(numb){
	ChocChipCookie::taste();
}
ChocChipCookie::~ChocChipCookie(){
}

/**
 * 	if numb is 3 outputs "Chocolate Chip Cookie #3"
 */
std::string ChocChipCookie::taste(){
	std::string message = "Chocolate Chip Cookie #"+ std::to_string(numb);
	return message;
}
