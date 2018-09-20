#include <iostream>
#include "University.h"

int main() {
	University gos(1967, "gos");
	University utm(1975, "utm");
	University asem(1954, "asem");

	gos.addStudent("Petru", 22, 6.38f);
	gos.addStudent("Alex", 14, 6.79f);
	gos.addStudent("Varfolamei", 44, 6.8f);


	utm.addStudent("Dumitru", 20, 8.38f);
	utm.addStudent("Elizabeth", 18, 8.39f);
	utm.addStudent("Eduard", 19, 8.4f);

	asem.addStudent("Ekaterina", 25, 10);
	asem.addStudent("Pedro", 10, 10);
	asem.addStudent("Alberto", 23, 10);

	cout << "Average mark from all universities : " << (gos.getAverage() + utm.getAverage() + asem.getAverage()) / 3 << endl;

	system("pause");

	return 0;
}