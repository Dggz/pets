#pragma once
#include "Controller.h"

class UI
{
private:
	Controller ctrl;

public:
	UI(const Controller& c) : ctrl(c) {}

	void run();

private:
	static void printMenu();
	static void printAdminMenu();

	void addPetToRepo();
	void displayAllPetsRepo();
	//void addSongToPlaylist();
	//void addAllSongsByArtistToPlaylist();
};
