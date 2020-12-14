/*
 * PecanBar.h
 *
 *  Created on: Dec 13, 2020
 *      Author: keith
 */

#ifndef PECANBAR_H_
#define PECANBAR_H_

#include "Dessert.h"

class PecanBar: public Dessert {
public:
	/**
		 constructs object
	 *
	 * numb: which number dessert this is
	 */
	PecanBar(int numb=1);
	virtual ~PecanBar();

	/**
	 * if numb is 3 outputs "Pecan Bar #3"
	 *
	 */
	virtual std::string taste();
};

#endif /* PECANBAR_H_ */
