//Erik Ocampo
#include <iostream>
using namespace std;
// function prototype
void calculateAverage(int numGrades, double sumGrades, double& avgGrade);
int main() {
 
int numGrades;
 
double sumGrades = 0.0;
 
double avgGrade;
 
cout << "Enter the number of grades: ";
 
cin >> numGrades;
 
for (int i = 0; i < numGrades; i++) {
 
double grade;
 
cout << "Enter grade #" << i + 1 << ": ";
 
cin >> grade;
 
sumGrades += grade;
 
}
 
calculateAverage(numGrades, sumGrades, avgGrade);
 
// determine letter grade based on 10-point scale
 
char letterGrade;
 
if (avgGrade >= 90) {
 
letterGrade = 'A';
 
} else if (avgGrade >= 80) {
 
letterGrade = 'B';
 
} else if (avgGrade >= 70) {
 
letterGrade = 'C';
 
} else if (avgGrade >= 60) {
 
letterGrade = 'D';
 
} else {
 
letterGrade = 'F';
 
}
 
cout << "Average grade: " << avgGrade << endl;
 
cout << "Letter grade: " << letterGrade << endl;
 
return 0;
}
// function definition
void calculateAverage(int numGrades, double sumGrades, double& avgGrade) {
 
avgGrade = sumGrades / numGrades;
