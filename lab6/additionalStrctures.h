#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Name {
	string firstName;
	string lastName;
};

struct Date {
	int day;
	int month;
	int year;
};

enum Gender {
	FEMALE, MALE
};

struct Address {
	int appartamentNumber;
	int houseNumber;
	string street;
	string region;
};

struct Phone {
	int regionCode;
	int operatorCode;
	string phoneNumber;
};

class History {
	string simptoms;
	string diagnosticResults;
	string healing;
};
