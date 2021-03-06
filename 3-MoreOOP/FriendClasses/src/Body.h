/*
 * Body.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef BODY_H_
#define BODY_H_

#pragma once

// Forward reference of the "handle" class, so the compiler knows about it.
class Handle;

class Body {
protected:
	friend class Handle;
private:
	int someData;

public:
	Body();
	virtual ~Body();
};

#endif /* BODY_H_ */
