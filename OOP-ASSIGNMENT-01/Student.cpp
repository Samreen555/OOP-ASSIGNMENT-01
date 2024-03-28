#include "Student.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

using namespace std;
Student::Student() {}

Student::Student(int id, string n, vector<string> sec, int no, vector<string> list) : Studentid(id), name(n), sections(sec), phoneNumber(no), studentList(list) {}

void Student::showListOfStudents() {
    ifstream inputFile("Student.txt");
    if (!inputFile.is_open()) {
        cerr << "Failed to open the file.\n";
        return;
    }
    string studentName;
    while (getline(inputFile, studentName)) {
        cout << studentName << endl;
        studentList.push_back(studentName); // Store each student name in the vector
    }
    inputFile.close();
}

void Student::addStudent(const string& newStudent, const string& className, const string& enrollment) {
    // Construct the student information string
    string studentInfo = newStudent + " " + className + " " + enrollment;

    // Add new student to the vector
    studentList.push_back(studentInfo);

    // Open the file in append mode
    ofstream outputFile("Student.txt", ios::app);
    if (!outputFile.is_open()) {
        cerr << "Failed to open the file.\n";
        return;
    }

    // Write the new student's information to the file
    outputFile << studentInfo << endl;

    // Close the file
    outputFile.close();
}


void Student::removeStudent(const string& studentToRemove) {
    auto it = studentList.begin();
    while (it != studentList.end()) {
        if (*it == studentToRemove) {
            it = studentList.erase(it); // Remove the student if found
            cout << "Student removed.\n";
            return; // Exit the function after removing the student
        }
        else {
            ++it;
        }
    }
    cout << "Student not found in the list.\n";
}
