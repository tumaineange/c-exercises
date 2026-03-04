#include <iostream>
using namespace std;
double calculateAverage(int totalMarks, int numberOfStudents) {
    if (numberOfStudents == 0)
        return 0;
    return (double)totalMarks / numberOfStudents;
}

// Function to determine highest mark
int findHighest(int currentMark, int highestMark) {
    if (currentMark > highestMark)
        return currentMark;
    return highestMark;
}


int findLowest(int currentMark, int lowestMark) {
    if (currentMark < lowestMark)
        return currentMark;
    return lowestMark;
}

int countPass(int mark) {
    if (mark >= 50)
        return 1;
    return 0;
}

int main() {
    int numberOfStudents;
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;

    int mark;
    int totalMarks = 0;
    int highestMark = 0;
    int lowestMark = 100;
    int passCount = 0;

    for (int i = 1; i <= numberOfStudents; i++) {
        cout << "Enter mark for student " << i << ": ";
        cin >> mark;

        totalMarks += mark;
        highestMark = findHighest(mark, highestMark);
        lowestMark = findLowest(mark, lowestMark);
        passCount += countPass(mark);
    }

    double average = calculateAverage(totalMarks, numberOfStudents);

    cout << "\nResults:\n";
    cout << "Average mark: " << average << endl;
    cout << "Highest mark: " << highestMark << endl;
    cout << "Lowest mark: " << lowestMark << endl;
    cout << "Number of students who passed: " << passCount << endl;

    return 0;
}