#include "Tupperware.h"
#include "Dessert.h"
#include "ChocChipCookie.h"
#include "PecanBar.h"
#include <vector>
#include <ostream>

using namespace std;

Tupperware::Tupperware(int max_desserts):max_desserts(max_desserts){

}

//TODO all necessary cleanup here
Tupperware::~Tupperware(){

}

/**
	 trys to add the dessert to myDesserts if there is room
 *
 * \param pDessert: can be either a ChocChipCookie or a PecanBar
 * \return  true, dessert was added
 *			false, already have max_desserts desserts cannot add another
 *
 */
bool Tupperware::AddDessert(Dessert* pDessert){
	if (!max_desserts){
		int id = 1;
		for (int i=0;i<max_desserts+1;i++){
			ChocChipCookie *pDessert = new ChocChipCookie(id);
			myDesserts.push_back(pDessert);
			id++;
		}

		for (int i=0;i<max_desserts+1;i++){
			PecanBar *pDessert = new PecanBar(id);
			myDesserts.push_back(pDessert);
			id++;
		}
		return true;
	}
	return false;
}

/**
	 iterates over the container full of Desserts
	 and outputs the result of each Dessert's taste() method
 *
 * \return Nothing
 */
void Tupperware::ListDesserts(){
	for (std::vector<Dessert*>:: iterator myiter = myDesserts.begin(); myiter != myDesserts.end(); ++myiter){
			(*myiter)->Dessert::taste();
		}
}

/**
	 clears the vector of desserts
 *
 */
void Tupperware::clear(){
	for (std::vector<Dessert*>:: iterator myiter = myDesserts.begin(); myiter != myDesserts.end(); ++myiter){
		delete (*myiter);
	}
}
