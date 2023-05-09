//Erik Ocampo

#include <iostream>
using namespace std;

// Function prototypes
float milesToKilometers(float);
float kilometersToMiles(float);

int main()
{
    char choice;
    float distance, convertedDistance;

    cout << "Enter a distance: ";
    cin >> distance;

    cout << "Enter 'M' to convert miles to kilometers, or 'K' to convert kilometers to miles: ";
    cin >> choice;

    if (choice == 'M' || choice == 'm')
    {
        convertedDistance = milesToKilometers(distance);
        cout << distance << " miles = " << convertedDistance << " kilometers." << endl;
    }
    else if (choice == 'K' || choice == 'k')
    {
        convertedDistance = kilometersToMiles(distance);
        cout << distance << " kilometers = " << convertedDistance << " miles." << endl;
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

// Function to convert miles to kilometers
float milesToKilometers(float miles)
{
    return miles * 1.61;
}

// Function to convert kilometers to miles
float kilometersToMiles(float kilometers)
{
    return kilometers * 0.621;
}
