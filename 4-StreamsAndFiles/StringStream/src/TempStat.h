/*
 * TempStat.h
 *
 *  Created on: 18 Feb 2017
 *      Author: emiliano
 */

#ifndef TEMPSTAT_H_
#define TEMPSTAT_H_

#pragma once

#include <sstream>
#include <iostream>

class TempStat {

public:
	double minimum, maximum;

	TempStat(double minimum = 0.0, double maximum = 0.0)
			: minimum(minimum), maximum(maximum) {}

	~TempStat() {}

	void write(std::ostream & os);

	void read(std::istream & is);
};

// The following definitions are inline-d to avoid errors
inline std::ostream & operator<<(std::ostream & os, const TempStat & ts) {
	return (os << ts.minimum << "\t" << ts.maximum);
}

inline std::istream & operator>>(std::istream & is, const TempStat & ts) {
	return (is >> ts.minimum >> ts.maximum);
}

#endif /* TEMPSTAT_H_ */
