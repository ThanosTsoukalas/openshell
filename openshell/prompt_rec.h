#pragma once

#include "openshell.h"


bool should_i_exit = false;

void prompt_rec(std::string given_prompt) {
	if (checkfor("clear", given_prompt) == true) {
		system("cls");
	}
	else if (checkfor("exit", given_prompt) == true) {
		should_i_exit = true;
	}
	else if (checkfor("help", given_prompt) == true) {
		std::cout << "clear => clear all text in the shell window" << std::endl;
		std::cout << "exit => exit the shell window" << std::endl;
		std::cout << "help => get help regarding all available prompts" << std::endl;
	}
	else if (checkfor("dev", given_prompt) == true) {
		int choice;
		std::cout << "[1] Code Editor" << std::endl;
		std::cout << "[2] Compilers" << std::endl;
		std::cout << "[3] Runtime Environments" << std::endl;
		std::cout << std::endl << "Enter your choice [1 - 3] >> ";
		std::cin >> choice;

	}
	else
	{
		std::cout << "Cannot recognise the given prompt" << std::endl;
	}
	
}