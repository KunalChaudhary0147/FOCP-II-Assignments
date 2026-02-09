/*A content-management system receives user-entered text that may contain inconsistent spacing, mixed
letter cases, and invalid characters.
For reliable storage and processing, the system must normalize and validate the input string.
Develop a C++ program that performs the following tasks on a given input string:
1. Remove leading, trailing, and extra spaces between words
2. Convert the string to sentence case (first character uppercase, remaining lowercase)
3. Count and display:
o Total number of words
o Total number of digits
o Total number of special characters
4. Validate that the final string contains only alphabets, digits, and spaces
Display appropriate messages based on the validation result.*/

#include <iostream>
using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Step 1: Remove leading, trailing, and extra spaces
    string cleaned;
    bool inSpace = true;
    for (char ch : input) {
        if (ch == ' ') {
            if (!inSpace) {
                cleaned += ' ';
                inSpace = true;
            }
        } else {
            cleaned += ch;
            inSpace = false;
        }
    }
    // Remove trailing space if any
    if (!cleaned.empty() && cleaned.back() == ' ') {
        cleaned.pop_back();
    }

    // Step 2: Convert to sentence case
    if (!cleaned.empty()) {
        cleaned[0] = toupper(cleaned[0]);
        for (size_t i = 1; i < cleaned.length(); ++i) {
            cleaned[i] = tolower(cleaned[i]);
        }
    }

    // Step 3: Count words, digits, and special characters
    int wordCount = 0, digitCount = 0, specialCharCount = 0;
    bool inWord = false;
    for (char ch : cleaned) {
        if (isalpha(ch)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else if (isdigit(ch)) {
            digitCount++;
            inWord = false;
        } else if (ch == ' ') {
            inWord = false;
        } else {
            specialCharCount++;
            inWord = false;
        }
    }

    // Step 4: Validate final string
    bool isValid = true;
    for (char ch : cleaned) {
        if (!(isalpha(ch) || isdigit(ch) || ch == ' ')) {
            isValid = false;
            break;
        }
    }

    // Display results
    cout << "Normalized String: \"" << cleaned << "\"" << endl;
    cout << "Total number of words: " << wordCount << endl;
    cout << "Total number of digits: " << digitCount << endl;
    cout << "Total number of special characters: " << specialCharCount << endl;

    if (isValid) {
        cout << "The final string is valid." << endl;
    } else {
        cout << "The final string is invalid." << endl;
    }

    return 0;
}