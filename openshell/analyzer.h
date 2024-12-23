#pragma once

#include <string>
#include <iostream>

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

