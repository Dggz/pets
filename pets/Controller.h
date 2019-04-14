#pragma once
#include "Repo.h"
using namespace std;

class Controller
{
private:
	Repo repo;

public:
	Controller(const Repo& r) : repo(r) {}

	Repo getRepo() const { return repo; }

	void addPetCtrl(const string& name, const string& breed, const string& birth_date, const int& vaccines, const string& photos);
	void removePet(const string& name, const string& breed, const string& birth_date, const int& vaccines, const string& photos);

	~Controller();
};

