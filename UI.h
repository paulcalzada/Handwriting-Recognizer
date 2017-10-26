/*
 * UI.h
 *
 *  Created on: Oct 26, 2017
 *      Author: user
 */

#ifndef UI_H_
#define UI_H_
#include "Network.h"

class UI {
	Network* network;
public:
	UI();
	virtual ~UI();
};

#endif /* UI_H_ */
