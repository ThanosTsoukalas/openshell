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

	}
	else
	{
		std::cout << "Cannot recognise the given prompt" << std::endl;
	}
	
}