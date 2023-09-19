#include <iostream>
#include <fstream>
#include <string>
#include <vector>


// Note struct to hold note data
struct Note {
	int number = 0;
	std::string name = "";
	std::string text = "";
};


// Vector to hold att notes
std::vector<Note> notes;


// Function to ctreate a new note
int createNote(int count) {

	system("cls");

	// Get note name and text
	Note note;
	std::cout << "Enter note name: ";
	std::cin >> note.name;
	std::cout << "Enter note text (type END to finish): \n";


	std::ofstream file(note.name);

	if (file.is_open()) {
		++count; // Increment count
		note.number = count;

		// Add note to list and vector
		std::ofstream fout("list.txt", std::ios_base::app);
		fout << note .number << ' ' << note.name << std::endl;
		fout.close();

		notes.emplace_back(note);

		//Get text until END entered
		while (std::getline(std::cin, note.text) && note.text != "END") {
			file << note.text << '\n';
		}
		file.close();

		std::cout << "Note saved";
	}
	else {
		std::cout << "Error creating file";
	}		
	return count;//updated count
}

// Function to open note
void openNote(char command) {

	// Get note index from command
	int index = command - '0';

	for (int i = 0; i < notes.size(); i++) {
		if (notes[i].number == index) {
			index = i;
		}
	}
		
	std::ifstream file(notes[index].name);
	
	if (file) {
		system("cls");

		// Print note number and name
		std::cout << notes[index].number << ' ';
		std::cout << notes[index].name << std::endl;

		std::string line;

		// Print note text
		while (std::getline(file, line)) {
			std::cout << line << std::endl<< std::endl;
		}
		file.close();
		std::cout << "Enter anything to get out: \n";
		std::cin >> line;
	}
	else {
		std::cout << "File Not Found";
	}
}


// Bootstrap notes from list
void bootstrap(int* counter) {

		std::ifstream  fin("list.txt");
		if (fin) {
			std::string line;
			Note note;
			while (std::getline(fin, line)) {
				fin >> note.number >> note.name;
				notes.emplace_back(note);
				++*counter;
			}
			fin.close();
		}

	return;
}

// Ptint all notes
void printNotes() {

	if (notes.size() > 0) {
		system("cls");
		for (int i = 0; i < notes.size(); i++) {
			std::cout << notes[i].number << ' ' << notes[i].name << std::endl;
		}
	}
	else
		std::cout << "No notes yet, create ferst one!\n";
}

//Print menu
void printMenu() {

	std::cout << std::endl << std::endl << std::endl;
	std::cout << "Enter number of note to open it: \n";
	std::cout << "Else if want to create new note enter 'c' \n";
	std::cout << "Else enter 'e' to exit\n";
}

int main() {
	int counter = 0;
	do {
		if (counter == 0) {
			bootstrap(&counter);
		}
			printNotes();
			printMenu();

			char command;
			std::cin >> command;

		switch (command) {
		case 'e':
			exit(0);
		case 'c':
			counter = createNote(counter);
			break;
		default:
			openNote(command);

		}
	} while (true);

	return 0;
}
