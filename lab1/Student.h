#pragma once
#include <string>
using namespace std;
class Student{
	string name;
	int age;
	float mark;

public:

	string getName() { return name; }
	int getAge() { return age; }
	float getMark() { return mark; }

	Student(string name, int age, float mark) :name(name), age(age), mark(mark) {}
	~Student();
};

