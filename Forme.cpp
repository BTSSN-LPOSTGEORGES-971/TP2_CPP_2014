/*
 * Forme.cpp
 *
 *  Created on: 16 oct. 2014
 *      Author: mperouma
 */

#include "Forme.h"
using namespace std;
Forme::Forme() {
	// TODO Auto-generated constructor stub

}

Forme::~Forme() {
	// TODO Auto-generated destructor stub
}


double Forme::getSurface()
{
	return (this->r * this->r );
}

double Forme::getPerimeter()
{
	return (this->r * 4);
}

void Forme::display(){
	cout << "Caract�ristiques de la forme: " << endl;
	cout << "\t P�rim�tre" << this->getPerimeter() << endl;
	cout << "\t Aire " << this->getSurface() << endl;
}
