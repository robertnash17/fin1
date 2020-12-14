#include "Dessert.h"
#include "Tupperware.h"
#include <string>


Dessert::Dessert(int numb):numb(numb){
	Dessert::taste();
}

Dessert::~Dessert(){

}

/**
 * derived classes output "Name_of_Dessert #numb
 * for instance if the dessert is a Pecan Bar and numb=1 it should return "Pecan Bar #1"
 * std::to_string(numb) may be useful
 */
std::string Dessert::taste(){

}
