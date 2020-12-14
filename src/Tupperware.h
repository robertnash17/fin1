#include <vector>
#include "Dessert.h"

#ifndef TUPPERWARE_H_
#define TUPPERWARE_H_

class Tupperware {
public:
	/**
		constructs object
	 *
	 * \param max_desserts: maximum number of desserts that can fit in this container
	 */
	Tupperware(int max_desserts=4);

	//TODO all necessary cleanup here
	virtual ~Tupperware();

	/**
		 trys to add the dessert to myDesserts if there is room
	 *
	 * \param pDessert: can be either a ChocChipCookie or a PecanBar
	 * \return  true, dessert was added
	 *			false, already have max_desserts desserts cannot add another
	 *
	 */
	bool AddDessert(Dessert* pDessert);

	/**
		 iterates over the container full of Desserts
		 and outputs the result of each Dessert's taste() method
	 *
	 * \return Nothing
	 */
	void ListDesserts();

	/**
		 clears the vector of desserts
	 *
	 */
	void clear();
private:
	std::vector<Dessert*> myDesserts;
	const int max_desserts;
};

#endif /* TUPPERWARE_H_ */
