/*
 * Student.cpp
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#include <iostream>
#include "Student.h"

Student::Student() : course("Unassigned") {
	// TODO Auto-generated constructor stub

}

Student::Student(std::string fName, std::string lName, int age,
		std::string course) : Person(fName, lName, age), course(course) {

}

Student::~Student() {
	// TODO Auto-generated destructor stub
}

void Student::displayCourse() {
	std::cout << "Course: " << this->course << std::endl;
}

/**
 * Modifying a protected variable of the base (parent) class Person:
 *
 */

void Student::setAge(int age) {

	if (age < 5) {
		std::cout << "Student age needs to at least 5 years old." << std::endl;
	} else {
		this->age = age;
	}
}

int Student::getAge() {
	return this->age;
}
