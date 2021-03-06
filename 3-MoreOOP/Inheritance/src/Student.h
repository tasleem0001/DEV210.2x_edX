/*
 * Student.h
 *
 *  Created on: 15 Feb 2017
 *      Author: emiliano
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#pragma once
#include "Person.h"

/**
 * Person: base class
 * Student: child class
 */

class Student : public Person {
	std::string course;
public:
	Student();
	Student(std::string fName, std::string lName, int age, std::string course);
	virtual ~Student();

	void setAge(int age);
	int getAge();

	void displayCourse();
};

#endif /* STUDENT_H_ */
