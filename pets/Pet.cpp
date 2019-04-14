#include "Pet.h"
#include <Windows.h>
#include <shellapi.h>



Pet::Pet() : name(""), breed(""), birth_date(""), vaccines(), photo("")
{
}

Pet::Pet(const string & name, const string & breed, const string & birth_date, const int & vaccines, const string & photo)
{
	this->name = name;
	this->breed = breed;
	this->birth_date = birth_date;
	this->vaccines = vaccines;
	this->photo = photo;
}

bool Pet::operator==(Pet & p)
{
	return (this->name == p.name && this->breed == p.breed && this->birth_date == p.birth_date);
}

void Pet::show()
{
	ShellExecuteA(NULL, NULL, "chrome.exe", this->getPhoto().c_str(), NULL, SW_SHOWMAXIMIZED);
}

Pet::~Pet()
{
}
