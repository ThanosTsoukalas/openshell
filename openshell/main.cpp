﻿// A simple shell project in C++
#include "openshell.h"

// The "strip" and "checkfor" functions are declared at analyzer.h


int main()
{
	std::string prompt, given_disk_name;

	std::cout << "Please name the disk that openshell is installed on: ";
	std::getline(std::cin, given_disk_name);

	if (bit64_check()) {
		std::cout << "This machine is x64 based." << std::endl;
	}
	else
	{
		std::cout << "This machine is x86 based." << std::endl;
	}
	while (true)
	{
		std::cout << strip(given_disk_name) << ":/openshellCMD >> ";
		std::getline(std::cin, prompt);

		prompt_rec(prompt);

		if (should_i_exit == true) {
			return 0;
		}

	}

	return 0;
}

