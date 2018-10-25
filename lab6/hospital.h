#include "additionalStrctures.h"



class Hospital {
	string id;
	Address address;
	Phone phone;
};

class Departament : public Hospital {

};

class Staff :public Departament {
	Date joined;
	vector<string> education;
	vector<string> certification;
	vector<string> languages;
};


class OperationStaff : public Staff {};
class Doctor {
	vector<string> speciality;
	vector<string> locations;
};
class Surgeon {};


class AdministrativeStaff : public Staff {};
class FronDeskStaff : public AdministrativeStaff {};
class Receptionist : public AdministrativeStaff {};


class TechnicalStaff : public Staff {};
class Technician : public TechnicalStaff {};
class Technologist : public TechnicalStaff {};
class SurgicalTechnologist : public Technologist {};