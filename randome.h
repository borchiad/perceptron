/*
 * randome.h
 *
 *  Created on: Dec 4, 2018
 *      Author: Davidelocal
 */

#ifndef RANDOME_H_
#define RANDOME_H_

#include<random>

std::random_device rd;
std::mt19937 eng(rd());

float generator()
{
	std::uniform_real_distribution<float> gen(0,1);
	return gen(eng);
}



#endif /* RANDOME_H_ */
