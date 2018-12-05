/*
 * synaose.h
 *
 *  Created on: Dec 5, 2018
 *      Author: Davidelocal
 */

#ifndef SYNAPSE_H_
#define SYNAPSE_H_

#include <vector>


// for each next layer unit, a weighted sum is needed.
float sum(/*int my,*/ int n, std::vector<float> weights, std::vector<float> outs) //n is the number of units in the previous layer.
//weights is the weight vector associated with the neuron my.
{
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+(outs[i]*weights[i]);
	}
	return sum;
}




#endif /* SYNAPSE_H_ */
