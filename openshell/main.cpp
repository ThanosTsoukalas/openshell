// A simple shell project in C++
#include "openshell.h"

// The "strip" function is declared at redshell.h

int main() {
	std::string prompt, given_disk_name;

	std::cout << "Please name the disk that redshell is installed on: ";
	std::getline(std::cin, given_disk_name);

	while (true)
	{
		std::cout << strip(given_disk_name) << ":/redshellCMD >> ";
		std::getline(std::cin, prompt);

		std::cout << strip(prompt) << std::endl;
	}

	return 0;
}
