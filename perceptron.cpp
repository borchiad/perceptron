/*
 * perceptron.cpp
 *
 *  Created on: Dec 3, 2018
 *      Author: Davidelocal
 */

//Here we directly build the single layer perceptron.

#include<iostream>
#include<cmath>

#include "unit.h"
#include "training_set.h"
#include "weights.h"
#include "synapse.h"

int main()
{
	/////////////////////////////////////////////////
	int inp_unit=2,i;
	std::vector<unit> inp_lay;
	wei w1; //this is the weights vector
	std::vector<float> mywei;
	for(i=0;i<inp_unit;i++)
	{
		unit temp;
		temp.get_posit(0, i); //this assign the coordinates of the unit
		inp_lay.push_back(temp);
		//this for loop populates the input layer of units.
	}

	/////////////////////////////////////////////////
	//weights initialisation
	w1.get_weights(inp_unit);
	mywei=w1.gib_weights();

	//std::cout<<mywei[1]<<std::endl;
	/////////////////////////////////////////////////
	train train_data;
	train_data.open_gfile();
	std::vector<float> bias;
	std::vector< std::vector<float> > datas=train_data.get_datas();
	for (i = 0; i < datas[1].size(); i++)
	{
		bias.push_back(1.0);
	}
	datas.push_back(bias); //this set a static input.
	/////////////////////////////////////////////////

	std::cin.get();

}


