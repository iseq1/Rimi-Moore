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
    cout << "������� ��� ��������: ";
    getline(cin, student.name);
    cout << "������� ������ �� 4 ��������� (����� ������): ";
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
        cout << "������ ������� ��������� � ���� " << fileName << endl;
    } else {
        cout << "������ ��� �������� ����� " << fileName << " ��� ������" << endl;
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
        cout << "������ ������� ��������� �� ����� " << fileName << endl;
    } else {
        cout << "������ ��� �������� ����� " << fileName << " ��� ������" << endl;
    }
    return students;
}

void printStudents(const vector<Student>& students) {
    setlocale(LC_ALL, "Russian");
    for (const auto& student : students) {
        double average = (student.grade1 + student.grade2 + student.grade3 + student.grade4) / 4.0;
        if (average > 7.0) {
            cout << student.name << " - ������� ����: " << average << endl;
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
                file << student.name << " - ������� ����: " << average << endl;
            }
        }
        file.close();
        cout << "���������� ������� ��������� � ���� " << fileName << endl;
    } else {
        cout << "������ ��� �������� ����� " << fileName << " ��� ������" << endl;
    }
}

int main() { setlocale(LC_ALL, "Russian");
    vector<Student> students;
    string fileName = "students.txt";
    bool quit = false;
    while (!quit) {
        cout << endl << "�������� ��������: " << endl;
        cout << "1. �������� ��������" << endl;
        cout << "2. ��������� ������ � ����" << endl;
        cout << "3. ��������� ������ �� �����" << endl;
        cout << "4. ������� ������ ��������� �� ������� ������ ������ 7" << endl;
        cout << "5. ��������� ���������� � ����" << endl;
        cout << "6. ����� �� ���������" << endl;
        int choice;
        cin >> choice;
        cin.ignore(); // ����� ���������� ������ ����� ������
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
                cout << "������������ �����" << endl;
                break;
        }
    }
    return 0;
}


/*
�������� �������� �� ������������� ��������� `Student`, ������� ������ ��� � ������ �� ������� ���������. � ������� `addStudent` �� ����������� � ������������ ��� ������ � ��������� �� � ������ `students`.

������� `saveStudentsToFile` ��������� ������ �� ������� `students` � ��������� ���� � �������� ������.

������� `readStudentsFromFile` ������ ������ �� ���������� ����� � ���������� ������ �������� `Student`.

������� `printStudents` ������� ������ ��������� �� ������� ������ ������ 7 �� �����.

������� `printStudentsToFile` ��������� ������ ��������� �� ������� ������ ������ 7 � ��������� ���� � �������� ������.
*/