#pragma once

#include "openshell.h"


int prompt_rec(std::string given_prompt) {
	if (checkfor("clear", given_prompt) == true) {
		system("cls");
	}
	else if (checkfor("exit", given_prompt) == true) {
		return 0;
	}
	else
	{
		std::cout << "Cannot recognise the given prompt" << std::endl;
	}
}