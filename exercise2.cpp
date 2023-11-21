// exercise2.cpp 

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
    Date start, end;

    cout << "Введіть час початку події (години та хвилини): ";
    cin >> start.hours >> start.minutes;
    cout << "Введіть час завершення події (години та хвилини): ";
    cin >> end.hours >> end.minutes;

    if (start.hours < 0 || start.hours > 24) {
        cout << "Невірне значення годин початку!" << endl;
        return 1;
    }

    if (start.minutes < 0 || start.minutes > 59) {
        cout << "Невірне значення хвилин початку!" << endl;
        return 1;
    }

    if (end.hours < 0 || end.hours > 24) {
        cout << "Невірне значення годин завершення!" << endl;
        return 1;
    }

    if (end.minutes < 0 || end.minutes > 59) {
        cout << "Невірне значення хвилин завершення!" << endl;
        return 1;
    }

    int hoursPassed = end.hours - start.hours;
    int minutesPassed = end.minutes - start.minutes;
    while (minutesPassed < 0) {
        minutesPassed += 60;
        hoursPassed--;
    }

    cout << "Тривалість події: " << setfill('0') << setw(2) << hoursPassed << ":" << setw(2) << minutesPassed << endl;

    return 0;
}
