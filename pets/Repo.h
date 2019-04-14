#pragma once
#include "Pet.h"
#include "DynamicVector.h"

class Repo
{
private:
	DynamicVector pets;

public:
	/*
	Default constructu=or.
	Initializes an object of type repository.
	*/
	Repo() {}

	/*
	Adds a Pet to the repository.
	Input: p - Pet.
	Output: the pet is added to the repository.
	*/
	void addPet(const Pet& pet);

	void removePet(const Pet& pet);

	/*
	Finds a pet, by name and breed.
	Input: artist, title - string
	Output: the song that was found, or an "empty" song (all fields empty and duration 0), if nothing was found.
	*/
	Pet findByNameAndBreed(const std::string& name, const std::string& breed);

	DynamicVector getPets() const { return pets; }
};