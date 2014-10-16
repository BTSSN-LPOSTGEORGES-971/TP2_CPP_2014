/*
 * Forme.h
 *
 *  Created on: 16 oct. 2014
 *      Author: mperouma
 */

#ifndef FORME_H_
#define FORME_H_
#include <iostream>
class Forme {
protected:
	double r;

public:
	Forme();
	virtual ~Forme();
	//Getters and setters
	void setR(double newR){this->r=newR;}
	double getR(){return this->r;}

	double getSurface();
	double getPerimeter();

	//Affichage
	void display();

};

#endif /* FORME_H_ */
