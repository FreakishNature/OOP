#include <iostream>
using namespace std;

class Box {
	float w = 3;
	float h = 4;
	float l = 5;

	float area;
	float capacity;
public:

	void calculateArea() {
		area = w * l * 2 + 2 * h * l * w * h * 2;
	}

	void calculateCapacity() {
		capacity = w * h * l;
	}

	Box() {
		calculateArea();
		calculateCapacity();
	}

	Box(float size):w(size),h(size),l(size) {
		calculateArea();
		calculateCapacity();
	}
	
	Box(float w, float h, float l):w(w),h(h),l(l) {
		calculateArea();
		calculateCapacity();
	}

	void printProperties() {
		cout << "Width = " << w << "\tHeight = " << h << "\tLength = " << l << "\tArea = " << area << "\tCapacity = " << capacity << endl;
	}

	


};

int main() {
	Box boxes[] = {
		Box(),Box(5),Box(10, 8, 15)
	};
	

	for (auto box : boxes) {
		box.printProperties();
	}

	system("pause");
	return 0;
}