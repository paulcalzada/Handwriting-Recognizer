/*
 * MnistLoader.h
 *
 *  Created on: Oct 26, 2017
 *      Author: user
 */

#ifndef MNISTLOADER_H_
#define MNISTLOADER_H_
#include "Image.h"
#include <vector>
#include <string>

class MnistLoader {
public:
	MnistLoader();
	virtual ~MnistLoader();
	static std::vector<Image*> getData(std::string filename);
};

#endif /* MNISTLOADER_H_ */
