// exercise1.cpp 

#include <iostream>
#include <iomanip>

using namespace std;

struct Date {
    int hours;
    int minutes;

    Date() : hours(0), minutes(0) {}

    Date(int hours, int minutes) : hours(hours), minutes(minutes) {}
};

int main() {

    Date date;


    cout << "Введіть значення годин: ";
    cin >> date.hours;
    cout << "Введіть значення хвилин: ";
    cin >> date.minutes;

    int minutesPassed = 0;
    cout << "Введіть кількість хвилин, які пройшли: ";
    cin >> minutesPassed;

    if (date.hours < 0 || date.hours > 24) {
        cout << "Невірне значення годин!" << endl;
        return 1;
    }

    if (date.minutes < 0 || date.minutes > 59) {
        cout << "Невірне значення хвилин!" << endl;
        return 1;
    }

    if (minutesPassed < 0) {
        cout << "Невірне значення кількості хвилин!" << endl;
        return 1;
    }

    date.minutes += minutesPassed;
    while (date.minutes >= 60) {
        date.minutes -= 60;
        date.hours++;
        if (date.hours >= 24) {
            date.hours = 0;
        }
    }

    cout << "Новий час: " << setfill('0') << setw(2) << date.hours << ":" << setw(2) << date.minutes << endl;

    return 0;
}
