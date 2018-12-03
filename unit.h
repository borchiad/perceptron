/*
 * unit.h
 *
 *  Created on: Dec 3, 2018
 *      Author: Davidelocal
 */

#ifndef UNIT_H_
#define UNIT_H_

#include <cmath>
#include <iostream>
#include <vector>

class unit
{
private:
	int coox, cooy;
public:
	float acti(float a)
	{
		float out;
		out=tanh(a);
		return out;
	}

};


#endif /* UNIT_H_ */
