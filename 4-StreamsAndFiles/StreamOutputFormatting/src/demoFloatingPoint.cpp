/*
 * demoFloatingPoint.cpp
 *
 *  Created on: 17 Feb 2017
 *      Author: emiliano
 */

#include "demoFloatingPoint.h"

void printNumbers() {
	double pi = 3.14159265358979;
	double s = 1.989E30;
	double n = 42.0;

	std::cout << pi << std::endl;
	std::cout << s << std::endl;
	std::cout << n << std::endl << std::endl;
}

void demoFloatingPoint() {

	// Set the precision
	// std::cout << std::setprecision(4);

	// DEFAULT (i.e. general) format
	printNumbers();

	// Fixed format
	std::cout << std::fixed;
	printNumbers();

	// Scientific format
	std::cout << std::scientific;
	printNumbers();

	// Reinstantiate general (i.e. not fixed or scientific) format
	std::cout.unsetf(std::ios::fixed | std::ios::scientific);
	printNumbers();
}


