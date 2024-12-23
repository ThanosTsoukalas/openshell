#pragma once

#include <string>
#include <iostream>

// similar to the 'strip' function in python

std::string strip(std::string string_to_strip) {

	int string_length = string_to_strip.length();
	// std::cout << "analyzer.h: string_length = " << string_length << std::endl;
	int string_list_current_index = 0;
	std::string actual_text;

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
