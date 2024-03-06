#include "FirstNonRepeatingChar.h"


char firstNonRepeatingChar(const string& input_string) {
  //   +======================================================+
  //   |                 WRITE YOUR CODE HERE                 |
  //   | Description:                                         |
  //   | - This function finds the first non-repeating char   |
  //   |   in a given string.                                 |
  //   | - It uses an unordered_map to count char occurrences |
  //   | - Loops through the string to check counts.          |
  //   |                                                      |
  //   | Return type: char                                    |
  //   |                                                      |
  //   | Tips:                                                |
  //   | - 'charCounts' keeps track of each char's count.     |
  //   | - Loops twice: once to count, once to find answer.   |
  //   | - Returns '\0' if no non-repeating char is found.    |
  //   | - Check output from Test.cpp in "User logs".         |
  //   +======================================================+
  unordered_map<char, int> charCounts; // Map to store the count of each character

    // Count occurrences of each character
    for (char ch : input_string) {
        charCounts[ch]++;
    }

    // Find the first non-repeating character
    for (char ch : input_string) {
        if (charCounts[ch] == 1) {
            return ch; // Found the first non-repeating character
        }
    }

    return '\0'; // Return '\0' if no non-repeating char is found
}