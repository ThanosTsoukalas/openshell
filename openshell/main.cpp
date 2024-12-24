// A simple shell project in C++
#include "openshell.h"

// The "strip" and "checkfor" functions are declared at analyzer.h

int main() 
{
	std::string prompt, given_disk_name;

	std::cout << "Please name the disk that redshell is installed on: ";
	std::getline(std::cin, given_disk_name);

	while (true)
	{
		std::cout << strip(given_disk_name) << ":/redshellCMD >> ";
		std::getline(std::cin, prompt);

		prompt_rec(prompt);
		
		if (should_i_exit == true) {
			return 0;
		}
	
	}

	return 0;
}

