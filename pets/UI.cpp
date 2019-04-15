#include "UI.h"
#include <string>

using namespace std;

void UI::printMenu()
{
	cout << endl;
	cout << "1 - Admin mode." << endl;
	//cout << "2 - Manage playlist." << endl;
	cout << "0 - Exit." << endl;
}

void UI::printAdminMenu()
{
	cout << "Possible commands: " << endl;
	cout << "\t 1 - Add pet." << endl;
	cout << "\t 2 - Display all." << endl;
	cout << "\t 3 - Delete pet." << endl;
	cout << "\t 4 - Update pet." << endl;
	cout << "\t 0 - Back." << endl;
}

//void UI::printPlayListMenu()
//{
//	cout << "Possible commands: " << endl;
//	cout << "\t 1 - Add song." << endl;
//	cout << "\t 2 - Add songs by artist." << endl;
//	cout << "\t 3 - Play." << endl;
//	cout << "\t 4 - Next." << endl;
//	cout << "\t 0 - Back." << endl;
//}

void UI::addPet()
{
	cout << "Enter the name: ";
	std::string name;
	getline(cin, name);
	cout << "Enter the breed: ";
	std::string breed;
	getline(cin, breed);
	std::string birth_date;
	cout << "Enter the birth_date: " << endl;
	cin >> birth_date;
	//cin.ignore();
	int vaccines = 0;
	cout << "Enter the vaccines: ";
	cin >> vaccines;
	cin.ignore();
	cout << "Photo link: ";
	std::string photo;
	getline(cin, photo);

	this->ctrl.addPetCtrl(name, breed, birth_date, vaccines, photo);
}

void UI::removePet()
{
	cout << "Enter the name: ";
	std::string name;
	getline(cin, name);
	cout << "Enter the breed: ";
	std::string breed;
	getline(cin, breed);
	std::string birth_date;
	cout << "Enter the birth_date: " << endl;
	cin >> birth_date;
	//cin.ignore();
	int vaccines = 0;
	cout << "Enter the vaccines: ";
	cin >> vaccines;
	cin.ignore();
	cout << "Photo link: ";
	std::string photo;
	getline(cin, photo);

	this->ctrl.removePet(name, breed, birth_date, vaccines, photo);
}

void UI::displayAllPets()
{
	DynamicVector v = this->ctrl.getRepo().getPets();
	Pet* movies = v.getAllElems();
	if (movies == NULL)
		return;
	if (v.getSize() == 0)
	{
		cout << "There are no pets in the repository." << endl;
		return;
	}

	for (int i = 0; i < v.getSize(); i++)
	{
		Pet p = movies[i];
		cout << p.getName() << ":\n\t" << p.getBreed() << "\n\t" << p.getBirthDate() << "\nVaccines: " << p.getVaccines() << endl << endl;
	}
}

void UI::run()
{
	while (true)
	{
		UI::printMenu();
		int command{ 0 };
		cout << "Input the command: ";
		cin >> command;
		cin.ignore();
		if (command == 0)
			break;

		if (command == 1)
		{
			while (true)
			{
				UI::printAdminMenu();
				int commandRepo{ 0 };
				cout << "Input the command: ";
				cin >> commandRepo;
				cin.ignore();
				if (commandRepo == 0)
					break;
				switch (commandRepo)
				{
				case 1:
					this->addPet();
					break;
				case 2:
					this->displayAllPets();
					break;
				case 3:
					this->removePet();
					break;
				}
			}
		}

		// playlist management
		if (command == 2)
		{
			cout << "Nope, lol" << endl;
			/*while (true)
			{
				UI::printPlayListMenu();
				int commandPlaylist{ 0 };
				cout << "Input the command: ";
				cin >> commandPlaylist;
				cin.ignore();
				if (commandPlaylist == 0)
					break;
				switch (commandPlaylist)
				{
				case 1:
					this->addSongToPlaylist();
					break;
				case 2:
					this->addAllSongsByArtistToPlaylist();
					break;
				case 3:
				{
					if (this->ctrl.getPlaylist().isEmpty())
					{
						cout << "Nothing to play, the playlist is empty." << endl;
						continue;
					}
					this->ctrl.startPlaylist();
					Song s = this->ctrl.getPlaylist().getCurrentSong();
					cout << "Now playing: " << s.getArtist() << " - " << s.getTitle() << endl;
					break;
				}
				case 4:
				{
					if (this->ctrl.getPlaylist().isEmpty())
					{
						cout << "Nothing to play, the playlist is empty." << endl;
						continue;
					}
					this->ctrl.nextSongPlaylist();
					Song s = this->ctrl.getPlaylist().getCurrentSong();
					cout << "Now playing: " << s.getArtist() << " - " << s.getTitle() << endl;
					break;
				}
				}
			}*/
		}
	}
}
