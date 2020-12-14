/*
 * ChocChipCookie.h
 *
 *  Created on: Dec 13, 2020
 *      Author: keith
 */

#ifndef CHOCCHIPCOOKIE_H_
#define CHOCCHIPCOOKIE_H_
#include "Dessert.h"

class ChocChipCookie:public Dessert {
public:
	/**
		constructs object
	 *
	 * 	numb: which number dessert this is
	 */
	ChocChipCookie(int numb=1);
	virtual ~ChocChipCookie();

	/**
	 * 	if numb is 3 outputs "Chocolate Chip Cookie #3"
	 */
	virtual std::string taste();
};

#endif /* CHOCCHIPCOOKIE_H_ */
