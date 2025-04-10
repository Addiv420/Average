#include <iostream>

using namespace std;

int main() {

    system("clear");

    int amountOfNumbers{0};
    int currentIndex{0};

    cout << "How many numbers do you have: ";
    cin >> amountOfNumbers;

    cout << endl;

    double numbers[amountOfNumbers];

    while(currentIndex < amountOfNumbers) {
        cout << "Number " << currentIndex + 1 << ": ";
        cin >> numbers[currentIndex];
        ++currentIndex;
    }

    double sum{0};
    currentIndex = 0;

    while(currentIndex < amountOfNumbers) {
        sum += numbers[currentIndex];
        ++currentIndex;
    }

    cout << endl;

    cout << "Your total sum is: " << sum << endl;
    double average = sum / amountOfNumbers;
    cout << "Your average is: " << average << endl;

    currentIndex = 0;
    double lastDeviation{0};

    while(currentIndex < amountOfNumbers) {
        lastDeviation = numbers[currentIndex] - average;
        ++currentIndex;
    }

    cout << "Last deviation calculated: " << lastDeviation << endl;

    return 0;
}
