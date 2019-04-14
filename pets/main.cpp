// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Pet.h"
#include "UI.h"
#include "Repo.h"
#include "Controller.h"
#include <Windows.h>
using namespace std;

int main()
{
	Repo repo{};

	Pet p1( "Finding Nemo", "Animation", "1-2-2010", 12, "https://www.youtube.com/watch?v=wZdpNglLbt8" );
	Pet p2( "Shutter Island", "Thriller", "1-2-2010", 56, "https://www.youtube.com/watch?v=5iaYLCiq5RM" );
	Pet p3( "Monsters Inc.", "Animation", "1-2-2010", 3, "https://www.youtube.com/watch?v=cvOQeozL4S0" );
	repo.addPet(p1);
	repo.addPet(p2);
	repo.addPet(p3);

	Controller ctrl{ repo };
	UI ui{ ctrl };
	ui.run();

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
