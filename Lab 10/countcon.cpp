//Erik Ocampo

#include <iostream>
#include <cctype>

// Function prototypes
int countLetters(const char*);
int countDigits(const char*);
int countWhiteSpace(const char*);

int main() {
    int numLetters, numDigits, numWhiteSpace;
    char inputString[51];

    std::cout << "Enter a string of no more than 50 characters: " << std::endl << std::endl;
    std::cin.getline(inputString, 51);

    numLetters = countLetters(inputString);
    numDigits = countDigits(inputString);
    numWhiteSpace = countWhiteSpace(inputString);

    std::cout << "The number of letters in the entered string is " << numLetters << std::endl;
    std::cout << "The number of digits in the entered string is " << numDigits << std::endl;
    std::cout << "The number of white spaces in the entered string is " << numWhiteSpace << std::endl;

    return 0;
}

int countLetters(const char *strPtr) {
    int count = 0;
    while (*strPtr != '\0') {
        if (isalpha(*strPtr)) // isalpha determines if the character is a letter
            count++;
        strPtr++;
    }
    return count;
}

int countDigits(const char *strPtr) {
    int count = 0;
    while (*strPtr != '\0') {
        if (isdigit(*strPtr)) // isdigit determines if the character is a digit
            count++;
        strPtr++;
    }
    return count;
}

int countWhiteSpace(const char *strPtr) {
    int count = 0;
    while (*strPtr != '\0') {
        if (isspace(*strPtr)) // isspace determines if the character is a whitespace character
            count++;
        strPtr++;
    }
    return count;
}
