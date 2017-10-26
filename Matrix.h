/*
 * Matrix.h
 *
 *  Created on: Oct 26, 2017
 *      Author: user
 */

#ifndef MATRIX_H_
#define MATRIX_H_
#include <vector>

class Matrix {
	float** data;
	std::vector<int> size;
public:
	Matrix();
	virtual ~Matrix();
	Matrix multiply(Matrix other);
};

#endif /* MATRIX_H_ */
