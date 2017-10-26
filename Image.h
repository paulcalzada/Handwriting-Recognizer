/*
 * Image.h
 *
 *  Created on: Oct 26, 2017
 *      Author: user
 */

#ifndef IMAGE_H_
#define IMAGE_H_
#include "stdint.h"
#include <vector>

class Image {
	std::vector<int> size;
	uint8_t* data;
	int value;

public:
	Image();
	virtual ~Image();
	Image(int** data, int value, int w, int h);
};

#endif /* IMAGE_H_ */
