//============================================================================
// Name        : ConstructorsAndDestructors.cpp
// Author      : Ing. Emiliano Borghi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
#include "Dog.h"

using namespace std;

int main() {

	/**
	 * We declare a pointer called pOne that will hold the memory address of a
	 * Person object that will reside in an area of computer memory known as
	 * the heap.
	 *
	 * We have not created an actual object in memory yet, we have simply asked
	 * the computer to allocate sufficient memory to store the object.
	 *
	 */

    // Create a Person instance using 3 argument constructor
    Person *p = new Person("Tom", "Thumb", 15);

    p->SayHello();

    Dog *d = new Dog("Fido", "Thumb");

    d->SayHello();

    /**
     * You might have dynamically declared and used other objects from within your
     * object. In this case, you are responsible for ensuring that those other
     * objects are also destroyed and that their memory is released.
     *
     */

    delete p, d;

	return 0;
}
