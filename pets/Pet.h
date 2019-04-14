#pragma once
#include <iostream>
using namespace std;

class Pet
{

private:
	string name;
	string breed;
	string birth_date;
	int vaccines;
	string photo;

public:
	Pet();
	Pet(const string& name, const string& breed, const string& birth_date, const int& vaccines, const string& photos);

	string getName() const { return name; }
	string getBreed() const { return breed; }
	string getBirthDate() const { return birth_date; }
	int getVaccines() const { return vaccines; }
	string getPhoto() const { return photo; }

	bool operator==(Pet & p);
	void show();

	~Pet();
};

// name, breed, birth date, vaccines, photo
