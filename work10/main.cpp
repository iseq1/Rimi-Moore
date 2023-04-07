#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct Student {
    string name;
    double grade1;
    double grade2;
    double grade3;
    double grade4;
};

void addStudent(vector<Student>& students) {
    setlocale(LC_ALL, "Russian");
    Student student;
    cout << "Введите ФИО студента: ";
    getline(cin, student.name);
    cout << "Введите оценки по 4 предметам (через пробел): ";
    cin >> student.grade1 >> student.grade2 >> student.grade3 >> student.grade4;
    students.push_back(student);
}

void saveStudentsToFile(const vector<Student>& students, const string& fileName) {
    setlocale(LC_ALL, "Russian");
    ofstream file(fileName);
    if (file.is_open()) {
        for (const auto& student : students) {
            file << student.name << "," << student.grade1 << "," << student.grade2 << ","
                 << student.grade3 << "," << student.grade4 << endl;
        }
        file.close();
        cout << "Данные успешно сохранены в файл " << fileName << endl;
    } else {
        cout << "Ошибка при открытии файла " << fileName << " для записи" << endl;
    }
}

vector<Student> readStudentsFromFile(const string& fileName) {
    setlocale(LC_ALL, "Russian");
    vector<Student> students;
    ifstream file(fileName);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string name;
            double grade1, grade2, grade3, grade4;
            getline(ss, name, ',');
            ss >> grade1 >> grade2 >> grade3 >> grade4;
            students.push_back({ name, grade1, grade2, grade3, grade4 });
        }
        file.close();
        cout << "Данные успешно прочитаны из файла " << fileName << endl;
    } else {
        cout << "Ошибка при открытии файла " << fileName << " для чтения" << endl;
    }
    return students;
}

void printStudents(const vector<Student>& students) {
    setlocale(LC_ALL, "Russian");
    for (const auto& student : students) {
        double average = (student.grade1 + student.grade2 + student.grade3 + student.grade4) / 4.0;
        if (average > 7.0) {
            cout << student.name << " - средний балл: " << average << endl;
        }
    }
}

void printStudentsToFile(const vector<Student>& students, const string& fileName) {
    setlocale(LC_ALL, "Russian");
    ofstream file(fileName);
    if (file.is_open()) {
        for (const auto& student : students) {
            double average = (student.grade1 + student.grade2 + student.grade3 + student.grade4) / 4.0;
            if (average > 7.0) {
                file << student.name << " - средний балл: " << average << endl;
            }
        }
        file.close();
        cout << "Результаты успешно сохранены в файл " << fileName << endl;
    } else {
        cout << "Ошибка при открытии файла " << fileName << " для записи" << endl;
    }
}

int main() { setlocale(LC_ALL, "Russian");
    vector<Student> students;
    string fileName = "students.txt";
    bool quit = false;
    while (!quit) {
        cout << endl << "Выберите действие: " << endl;
        cout << "1. Добавить студента" << endl;
        cout << "2. Сохранить данные в файл" << endl;
        cout << "3. Загрузить данные из файла" << endl;
        cout << "4. Вывести список студентов со средним баллом больше 7" << endl;
        cout << "5. Сохранить результаты в файл" << endl;
        cout << "6. Выйти из программы" << endl;
        int choice;
        cin >> choice;
        cin.ignore(); // Чтобы пропустить символ новой строки
        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                saveStudentsToFile(students, fileName);
                break;
            case 3:
                students = readStudentsFromFile(fileName);
                break;
            case 4:
                printStudents(students);
                break;
            case 5:
                printStudentsToFile(students, "results.txt");
                break;
            case 6:
                quit = true;
                break;
            default:
                cout << "Неправильный выбор" << endl;
                break;
        }
    }
    return 0;
}


/*
Обратите внимание на использование структуры `Student`, которая хранит ФИО и оценки по четырем предметам. В функции `addStudent` мы запрашиваем у пользователя эти данные и добавляем их в вектор `students`.

Функция `saveStudentsToFile` сохраняет данные из вектора `students` в текстовый файл с заданным именем.

Функция `readStudentsFromFile` читает данные из текстового файла и возвращает вектор структур `Student`.

Функция `printStudents` выводит список студентов со средним баллом больше 7 на экран.

Функция `printStudentsToFile` сохраняет список студентов со средним баллом больше 7 в текстовый файл с заданным именем.
*/