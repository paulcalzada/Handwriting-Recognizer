/*
 * Network.h
 *
 *  Created on: Oct 26, 2017
 *      Author: user
 */

#ifndef NETWORK_H_
#define NETWORK_H_
#include "Matrix.h"
#include "Image.h"
#include "MnistLoader.h"
#include <vector>

class Network {
	std::vector<Matrix> network;
	Image* trainingData;
	Image* validationData;
	Image* testData;
public:
	Network();
	virtual ~Network();
	int processImage(Image* i);
	void train();
	void loadData();
};

#endif /* NETWORK_H_ */
