#pragma once
#include "Student.h"
#include <vector>
#include <functional>
#include <numeric>

class University{
	int yearOfFoundation = 0;
	string name;
	vector<Student> students;

public:
	University(int yearOfFoundation,string name) : yearOfFoundation(yearOfFoundation), name(name) {}
	~University();

	void addStudent(string name, int age, float mark);

	float getAverage() {
		float marks = 0;

		for (auto &student : students) {
			marks += student.getMark();
		}

		return marks / students.size();
	}
};

