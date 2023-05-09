// This program tests a password for the American Equities
// web page to see if the format is correct

//Erik Ocampo

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Function prototypes
bool testPassWord(char[]);
int countLetters(char*);
int countDigits(char*);
bool containsUppercase(char*);

int main()
{
    char passWord[20];
    bool validPassword = false;

    do
    {
        cout << "Enter a password consisting of exactly 5 lowercase letters and 3 digits:" << endl;
        cin.getline(passWord, 20);

        if (testPassWord(passWord) && !containsUppercase(passWord))
        {
            cout << "Please wait - your password is being verified" << endl;
            validPassword = true;
        }
        else
        {
            cout << "Invalid password. Please enter a password "
                 << "with exactly 5 lowercase letters and 3 digits" << endl;
            cout << "For example, my37run9 is valid" << endl;
        }
    } while (!validPassword);

    int numLetters = countLetters(passWord);
    int numDigits = countDigits(passWord);

    cout << "Number of letters: " << numLetters << endl;
    cout << "Number of digits: " << numDigits << endl;

    return 0;
}

bool testPassWord(char custPass[])
{
    int numLetters, numDigits, length;

    length = strlen(custPass);
    numLetters = countLetters(custPass);
    numDigits = countDigits(custPass);

    if (numLetters == 5 && numDigits == 3 && length == 8)
        return true;
    else
        return false;
}

int countLetters(char *strPtr)
{
    int occurs = 0;

    while (*strPtr != '\0')
    {
        if (islower(*strPtr))
            occurs++;

        strPtr++;
    }

    return occurs;
}

int countDigits(char *strPtr)
{
    int occurs = 0;

    while (*strPtr != '\0')
    {
        if (isdigit(*strPtr))
            occurs++;

        strPtr++;
    }

    return occurs;
}

bool containsUppercase(char *strPtr)
{
    while (*strPtr != '\0')
    {
        if (isupper(*strPtr))
            return true;

        strPtr++;
    }

    return false;
}
