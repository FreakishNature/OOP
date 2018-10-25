#include "additionalStrctures.h"

class Person {
public:
	string title;
	string givenName;
	string middleName;
	string familyName;
	Name fullName;
	Date birtDate;
	Gender gender;
	Address address;
	Phone phone;
};


class Patient : public Person {
	Date accepted;
	History sickness;
	string prescription;
	vector<string> prescriptions;
	vector<string> allergies;
	vector<string> specialRequierments;
};
