#include <iostream>
#include <string>

using namespace std;

enum Company {
	ASUS , LENOVO , APPLE , MSI
};

enum Processor {
	AMD , INTEL_CORE
};

class PC {
	int memory = 0;
	int ram = 0;
	int vram = 0;
	int processorPower = 0;
	
	float screenSize = 0;

	string name;
	string processorType;
	string mark;

	
	int grade = 0;
public:

	PC(string name,int memory, int ram, int vram, int processorPower, float screenSize, string processorType, string mark) :
		name(name),
		ram(ram),
		memory(memory),
		vram(vram),
		processorPower(processorPower),
		screenSize(screenSize),
		processorType(processorType),
		mark(mark)
	{}

	void print() {
		cout << "\t" << name <<"\nMark : " + mark << "\nMemory : " << memory << "  " << vram << "\nProcessor : " + processorType + " " << processorPower << "\nScreen size : " << endl;
	}

	string compare(PC other) {
		this->memory > other.memory ? this->grade++ : other.grade++;
		this->ram > other.ram ? this->grade++ : other.grade++;
		this->screenSize > other.screenSize ? this->grade++ : other.grade++;
		this->processorPower > other.processorPower ? this->grade++ : other.grade++;
		

		return this->grade > other.grade ? this->name : this->name;

	}

	int getRam() { return ram; }
	int getMemory() { return memory; }
	int getVram() { return vram; }
	int getProcessorPower() { return processorPower; }
	string getName() { return name; }
	string getMark() { return mark; }
	string getProcessor() { return processorType; }
};


int main(int argc , char** argv) {
	PC *legionY520 = new PC("legionY520",1256, 16, 4, 3700, 15.6, "Intel", "Lenovo");
	PC *rogGL553 = new PC("GL553", 1256, 8, 4, 3700, 15.6, "Intel", "Asus");

	legionY520->print();
	cout << endl << endl;
	rogGL553->print();
	cout << endl << endl;


	legionY520->hello();
	

	cout << "Is better : " << legionY520->compare(*rogGL553) << endl;

	delete legionY520;
	delete rogGL553;


	system("pause");
	return 0;
}