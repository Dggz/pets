#include "Controller.h"


void Controller::addPetCtrl(const string & name, const string & breed, const string & birth_date, const int & vaccines, const string & photos)
{
	Pet p = Pet(name, breed, birth_date, vaccines, photos);
	this->repo.addPet(p);
}

void Controller::removePet(const string & name, const string & breed, const string & birth_date, const int & vaccines, const string & photos)
{
	Pet p = Pet(name, breed, birth_date, vaccines, photos);
	this->repo.removePet(p);
}

Controller::~Controller()
{
}
