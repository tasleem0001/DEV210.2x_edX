/*
 * Math.h
 *
 *  Created on: 14 Feb 2017
 *      Author: emiliano
 */

/*
 * Header file for the "Math" class
 *
 */

// This is a preprocessor directive that tells the compiler to only include
// this header once, regardless of how many times it has been imported in the
// program.
#pragma once

// "Math" class definition

/**
 * static: we don't have to instantiate the class to use it in our program.
 *
 * We will consider it to be a utility class and therefore we want it to be
 * static so we don't have to create an instance each time we want to use
 * functionality in that class.
 *
 * NOTE: I remove the static modifier in "class Math{}" to avoid errors.
 *
 */
class Math {
public:
	/**
	 * If the class is static, the functions must be, too.
	 */
	// given base an exponent, calculate value:
	static int pow(int, int);	// args: base, exponent
};

