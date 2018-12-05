/*
 * training_set.h
 *
 *  Created on: Dec 3, 2018
 *      Author: Davidelocal
 */

#ifndef TRAINING_SET_H_
#define TRAINING_SET_H_

#include <fstream>
#include <vector>
#include <string>

class train
{
private:
	std::vector< std::vector<float> > datas;
	std::vector<float> data_x;
	std::vector<float> data_y;

public:
	void open_gfile()
	{
		std::string s1;
		std::string s2;
		std::ifstream ifs;
		float a1;
		//open the file stream
		ifs.open("testx.txt", std::ifstream::in);
		while(!ifs.eof())
		{
			getline(ifs,s1);
			a1=std::stof(s1);
			data_x.push_back(a1);
		}
		ifs.close();
		datas.push_back(data_x);
		ifs.open("testy.txt", std::ifstream::in);
		while(!ifs.eof())
		{
			getline(ifs,s2);
			a1=std::stof(s2);
			data_y.push_back(a1);
		}
		ifs.close();
		datas.push_back(data_y);
	}
	/////////////////////////////////////////////////////////

	std::vector< std::vector<float> > get_datas()
		{
			return datas;
		}


	/////////////////////////////////////////////////////////

	std::vector<float> desired()
		{
		///here you'll define the appartenance? class of each point in the training set
		std::vector<float> res;
		int i;
		int j=data_x.size();
		for(i=0;i<j;i++)
		{
			if(datas[0][i]+datas[1][i] <= 0.1) //those are particular conditions defined during
				// the creation of the dataset'
			{
				res.push_back(0.1/*something meaning it's a point from class a*/);
			}
			else
			{
				res.push_back(-0.1/*something else*/);
			}
		}

		return res;
		}

};



#endif /* TRAINING_SET_H_ */
