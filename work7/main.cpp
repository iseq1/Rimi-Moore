#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Flight {
    string number;  // номер рейса
    string type;    // тип самолета
    string destination; // пункт назначения
    int hour;       // час вылета
    int minute;     // минута вылета
};

bool compareFlights(const Flight &a, const Flight &b) {
    if (a.hour == b.hour) {
        return a.minute < b.minute;
    }
    return a.hour < b.hour;
}

int main() {
    // Создание массива структур и заполнение его данными из расписания
    const int SIZE = 9;
    Flight flights[SIZE] = {
        {"SU1001", "Boeing 737", "Moscow", 13, 15},
        {"SU1002", "Boeing 747", "New York", 14, 30},
        {"SU1003", "Airbus A320", "London", 15, 45},
        {"EK231", "Boeing 777", "Dubai", 07, 30},
        {"SU1021", "Airbus A320", "Moscow", 12, 45},
        {"BA456", "Boeing 747", "London", 15,20},
        {"AF789", "Airbus A380", "Paris", 18,40},
        {"LH390", "Boeing 737", "Frankfurt", 22,10},
        {"SU1004", "Airbus A380", "Moscow", 16, 00}
    };

    // Запрос пункта назначения
    string destination;
    cout << "Enter destination: ";
    cin >> destination;

    // Сортировка массива по времени вылета
    sort(flights, flights + SIZE, compareFlights);


    cout << setw(5) << "Number" << setw(10) << "Type" << setw(10) << "Time" << endl;
    // Вывод информации о нужных рейсах
    for (int i = 0; i < SIZE; i++) {
        if (flights[i].destination == destination) {
            if (flights[i].minute>10) {
                cout << setw(5) << flights[i].number << setw(15) << flights[i].type << setw(5) << flights[i].hour << ":"
                     << flights[i].minute << endl;
            }
            else{
                cout << setw(5) << flights[i].number << setw(15) << flights[i].type << setw(5) << flights[i].hour << ":0"
                     << flights[i].minute << endl;
            }
        }

    }

    return 0;
}