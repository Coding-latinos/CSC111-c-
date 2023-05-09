// Write a program that will input temperatures for consecutive days. The program will store these values into an array and call a function that will return the average of the temperatures. It will also call a function that will return the highest temperature and a function that will return the lowest temperature. The user will input the number of temperatures to be read. There will be no more than 50 temperatures. Use typedef to declare the array type. The average should be displayed to two decimal places.

//

#include <iostream>
#include <iomanip>
#include <stdint.h> 

#define MAX_NUMBER_OF_TEMPS 50

typedef float TempArray[MAX_NUMBER_OF_TEMPS];

float avgerageTemp();
float highTemp();
float lowTemp();

TempArray temps;

uint8_t temps_size = 0;

int main() {
    int input_size;
    std::cout << "Please input the number of temperatures to be read\n";
    std::cin >> input_size;

    if ( input_size < 1 or input_size > MAX_NUMBER_OF_TEMPS ) { 
        std::cerr << "** Invalid number of temperatures. [ " << input_size
                  << " ] **\n"
                  << "** Must be between 1 and " << MAX_NUMBER_OF_TEMPS << " **\n";
        return 1;
    }

    temps_size = input_size;

    for ( uint8_t i = 0 ; i < temps_size ; i++ ) {
        std::cout << "Input Temperature " << (i+1) << ":\n";
        std::cin >> temps[i];

        if ( !std::cin.good() ) { 
            std::cerr << "** Error getting temperature input. **\n";
            return 2;
        }
    }

    std::cout << std::fixed << std::showpoint << std::setprecision(2)
              << "The average temperature is " << avgerageTemp() << '\n'
              << "The highest temperature is " << highTemp() << '\n'
              << "The lowest temperature is " << lowTemp() << '\n';

    return 0;
}


float avgerageTemp() {
    float sum = 0;

    for ( uint8_t i = 0 ; i < temps_size ; i++ ) {
        sum += temps[i];
    }

    return ( sum /= temps_size );
}

float highTemp() {
    float high = temps[0];

    for ( uint8_t i = 1 ; i < temps_size ; i++ ) {
        if ( temps[i] > high) {
            high = temps[i];
        }
    }

    return high;
}

float lowTemp() {
    float low = temps[0];

    for ( uint8_t i = 1 ; i < temps_size ; i++ ) {
        if ( temps[i] < low ) {
            low = temps[i];
        }
    }

    return low;
}