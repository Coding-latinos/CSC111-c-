//Write a program that will input letter grades (A, B, C, D, F), the number of which is input by the user (a maximum of 50 grades). The grades will be read into an array. A function will be called five times (once for each letter grade) and will return the total number of grades in that category. The input to the function will include the array, number of elements in the array and the letter category (A, B, C, D or F). The pro- gram will print the number of grades that are A, B, etc.

//Erik Ocampo

#include <iostream>

enum { 
    A = 0,
    B,
    C,
    D,
    F
};

unsigned grade_counts[5] = { 0, 0, 0, 0, 0 };

unsigned count_grade( char letter );

int main() {
    unsigned num_grades = 0;
    char input_grade = '\0';

    std::cout << "Please input the number of grades to be read in: ";
    std::cin >> num_grades;

    std::cout << "All grades must be upper case A B C D or F.\n";

    while ( num_grades-- > 0 ) {
        std::cout << "Input a grade: ";
        std::cin >> input_grade;

        switch (input_grade) {
            case 'A':
                grade_counts[A] += 1;
                break;
            case 'B':
                grade_counts[B] += 1;
                break;
            case 'C':
                grade_counts[C] += 1;
                break;
            case 'D':
                grade_counts[D] += 1;
                break;
            case 'F':
                grade_counts[F] += 1;
                break;
            default:
                std::cerr << "Note: skipping invalid input of " << input_grade
                          << " ...\n";
        }
    }

    std::cout << "\n\n";
    std::cout << "Number of A=" << count_grade('A') << '\n';
    std::cout << "Number of B=" << count_grade('B') << '\n';
    std::cout << "Number of C=" << count_grade('C') << '\n';
    std::cout << "Number of D=" << count_grade('D') << '\n';
    std::cout << "Number of F=" << count_grade('F') << '\n';

    return 0;
}


unsigned count_grade( char letter ) {
    switch (letter) {
        case 'A':
            return grade_counts[A];
        case 'B':
            return grade_counts[B];
        case 'C':
            return grade_counts[C];
        case 'D':
            return grade_counts[D];
        case 'F':
            return grade_counts[F];
        default:
            return 0;
    }
}