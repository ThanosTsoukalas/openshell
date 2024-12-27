#pragma once

#include <string>
#include <iostream>

// similar to the 'strip' function in python

std::string strip(std::string string_to_strip) {

	int string_length = string_to_strip.length();
	// std::cout << "analyzer.h: string_length = " << string_length << std::endl;
	int string_list_current_index = 0;
	std::string actual_text;
	std::list <int> actual_space_locations{};
	while (string_length > 0)
	{
		if (string_to_strip[string_list_current_index] != ' ') {
			if (!actual_text[0]) {
				actual_text = string_to_strip[string_list_current_index];

				// std::cout << "Current actual text: " << actual_text << std::endl;
			}
			else
			{
				actual_text = actual_text + string_to_strip[string_list_current_index];
				// std::cout << "Current actual text: " << actual_text << std::endl;
			}

		}

		string_list_current_index += 1;
		string_length -= 1;

		// std::cout << "List current index: " << string_list_current_index << std::endl;
		// std::cout << "Current string length: " << string_length << std::endl;
	}

	return actual_text;
}

// returns the next argument of an argumental prompt
std::string get_prompt_with_args(std::string given_prompt, std::string initial_prompt) {
	std::string next_arg;

	given_prompt = strip(given_prompt);

	int whole_prompt_list_index = 0;
	int initial_prompt_list_index = 0;
	int matched_chars_for_initial_prompt = 0;
	int given_prompt_length = given_prompt.length();
	int initial_prompt_length = initial_prompt.length();
	int current_initial_prompt_length = 0;

	while (given_prompt_length > 0) {
		if (given_prompt[whole_prompt_list_index] == initial_prompt[initial_prompt_list_index] && current_initial_prompt_length < initial_prompt_length)
		{
			matched_chars_for_initial_prompt += 1;
			current_initial_prompt_length += 1;
		}
		else
		{
			return "ERR_UNMATCHED_CHARS";
		}

		whole_prompt_list_index += 1;
		initial_prompt_list_index += 1;
	}
	if (matched_chars_for_initial_prompt == initial_prompt_length) {
		whole_prompt_list_index += 1;
		
		while (whole_prompt_list_index > initial_prompt_length) {

		}
	}
}

// checks if a given string exists in a given text

bool checkfor(std::string string_to_check, std::string text_given)
{
	text_given = strip(text_given);
	string_to_check = strip(string_to_check);

	int matched_chars = 0;
	int text_given_list_index = 0;
	int length_of_text_given = text_given.length();
	int length_of_string_to_check = string_to_check.length();

	if (length_of_string_to_check > length_of_text_given)
	{
		return false;
	}
	else
	{
		while (length_of_text_given > 0)
		{
			if (text_given[text_given_list_index] == string_to_check[0]) {
				matched_chars += 1;
			}

			length_of_text_given -= 1;
		}
	}

	if (matched_chars == length_of_string_to_check) {
		return true;
	}
	else
	{
		return false;
	}

}
