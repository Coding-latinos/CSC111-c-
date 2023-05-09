//Write the complete age population program given in the Pre-lab Reading Assignment.
//Statement of the problem:
//Given a list of ages (1 to 100) from the keyboard, the program will //tally how many people are in each age group.

//

#include <iostream>

const int Totoalofyears = 100;

int main() {
    int ageFrequency[Totoalofyears] = {}; 
    int ThecurrentAge = -99;              \

    while ( true ) {
        std::cout << "Please input an age from one to 100, put -99 to stop\n";
        std::cin >> ThecurrentAge;

        if ( ThecurrentAge == -99 ) {
            break;
        }

        
        if ( ThecurrentAge > 0 and ThecurrentAge < (Totoalofyears+1) ) {
            ageFrequency[ThecurrentAge-1] += 1;
        } else {
            std::cerr << "** Note: invalid age (" << ThecurrentAge
                      << ") discarded **\n";
        }
    }

    for ( int age = 0 ; age < Totoalofyears ; age++ ) {
        if ( ageFrequency[age] > 0 ) {
            std::cout << "The number of people " << (age+1) << " years old is "
                      << ageFrequency[age] << '\n';
        }
    }

    return 0;
}