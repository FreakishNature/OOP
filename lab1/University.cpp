#include "University.h"



void University::addStudent(string name, int age, float mark) {
	students.push_back( Student(name, age, mark) );
}


University::~University()
{
}
