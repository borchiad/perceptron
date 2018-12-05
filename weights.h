/*
 * weights.h
 *
 *  Created on: Dec 4, 2018
 *      Author: Davidelocal
 */

#ifndef WEIGHTS_H_
#define WEIGHTS_H_

#include <vector>
#include <iostream>
#include <cmath>

#include "randome.h"


class wei
{
private:
	std::vector<float> weis;
public:
	void get_weights(int num)  //takes in input the number of unit.
	{
		int i;
		for(i=0;i<num+1;i++)  //the +1 is needed in order to add a bias weigth to set the threshold
			{
			//random initialisation of the weights
			 weis.push_back(generator());
			}
	}
	std::vector<float> gib_weights()
	{
		return weis;
	}

};



#endif /* WEIGHTS_H_ */
