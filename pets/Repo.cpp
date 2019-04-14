#include "Repo.h"
#include <string>

using namespace std;

//Repo::~Repo()
//{
//}

void Repo::addPet(const Pet & pet)
{
	this->pets.add(pet);
}

void Repo::removePet(const Pet & pet)
{
	this->pets.remove(pet);
}

Pet Repo::findByNameAndBreed(const std::string & name, const std::string & breed)
{
	Pet* petsInDynamicVector = this->pets.getAllElems();
	if (petsInDynamicVector == NULL)
		return Pet{};

	for (int i = 0; i < this->pets.getSize(); i++)
	{
		Pet p = petsInDynamicVector[i];
		if (p.getName() == name && p.getBreed() == breed)
			return p;
	}

	return Pet();
}
