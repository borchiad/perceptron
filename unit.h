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
	void get_posit(int x, int y)
	{
		coox=x;
		cooy=y;
	}
	float acti(float a)
	{
		float out;
		out=tanh(a);
		return out;
	}

};


#endif /* UNIT_H_ */
