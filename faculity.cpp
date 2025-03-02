#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    int rollNumber;
    int marks;
    int attendance;
};

vector<Student> students;

// Function prototypes
void saveToFile();
void loadFromFile();
void facultyOperations();

void facultyOperations() {
    loadFromFile(); // Load records when the program starts
    int choice;

    while (true) {
        system("cls");
        cout << "******************************\n";
        cout << "* UNIVERSITY FACULTY PORTAL *\n";
        cout << "******************************\n";
        cout << "1. Add Student\n";
        cout << "2. Add Marks\n";
        cout << "3. Add Attendance\n";
        cout << "4. View Students\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Student newStudent;
            cout << "Enter student's name: ";
            cin.ignore();
            getline(cin, newStudent.name);
            cout << "Enter student's roll number: ";
            cin >> newStudent.rollNumber;
            newStudent.marks = 0;
            newStudent.attendance = 0;
            students.push_back(newStudent);
            cout << "Student added successfully!\n";
        } else if (choice == 2) {
            int rollNumber, newMarks;
            cout << "Enter student's roll number: ";
            cin >> rollNumber;

            bool found = false;
            for (auto& student : students) {
                if (student.rollNumber == rollNumber) {
                    cout << "Enter marks to add: ";
                    cin >> newMarks;
                    student.marks += newMarks;
                    cout << "Marks added successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student with roll number " << rollNumber << " not found!\n";
            }
        } else if (choice == 3) {
            int rollNumber, attendanceDays;
            cout << "Enter student's roll number: ";
            cin >> rollNumber;

            bool found = false;
            for (auto& student : students) {
                if (student.rollNumber == rollNumber) {
                    cout << "Enter attendance days to add: ";
                    cin >> attendanceDays;
                    student.attendance += attendanceDays;
                    cout << "Attendance updated successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student with roll number " << rollNumber << " not found!\n";
            }
        } else if (choice == 4) {
            cout << "\nList of Students:\n";
            for (const auto& student : students) {
                cout << "Name: " << student.name
                     << ", Roll Number: " << student.rollNumber
                     << ", Marks: " << student.marks
                     << ", Attendance: " << student.attendance << endl;
            }
        } else if (choice == 5) {
            saveToFile(); // Save records before exiting
            cout << "Exiting Faculty Operations...\n";
            break;
        } else {
            cout << "Invalid choice! Please try again.\n";
        }

        cout << "Press any key to continue...\n";
        cin.ignore();
        cin.get();
    }
}

void saveToFile() {
    ofstream outFile("students.txt");
    if (!outFile) {
        cout << "Error: Could not open file to save data.\n";
        return;
    }

    for (const auto& student : students) {
        outFile << student.name << "\n"
                << student.rollNumber << "\n"
                << student.marks << "\n"
                << student.attendance << "\n";
    }

    cout << "Data saved to file successfully!\n";
}

void loadFromFile() {
    ifstream inFile("students.txt");
    if (!inFile) {
        cout << "No previous records found. Starting fresh.\n";
        return;
    }

    Student student;
    while (getline(inFile, student.name)) {
        inFile >> student.rollNumber >> student.marks >> student.attendance;
        inFile.ignore(); // Ignore the newline character
        students.push_back(student);
    }

    cout << "Data loaded from file successfully!\n";
}

