/*
 * Dessert.h
 *
 *  Created on: Dec 13, 2020
 *      Author: keith
 */

#ifndef DESSERT_H_
#define DESSERT_H_
#include <string>

class Dessert {
public:
	Dessert(int numb);
	virtual ~Dessert();

	/**
	 * derived classes output "Name_of_Dessert #numb
	 * for instance if the dessert is a Pecan Bar and numb=1 it should return "Pecan Bar #1"
	 * std::to_string(numb) may be useful
	 */
	virtual std::string taste()=0;
protected:
	const int numb;
};

#endif /* DESSERT_H_ */
