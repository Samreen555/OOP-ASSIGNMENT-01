#include "Teacher.h"
#include "Student.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

using namespace std;
Teacher::Teacher() {}

Teacher::Teacher(int id, string n,string address, vector<string> sec, int no, vector<string> list) : teacherid(id), teacher_name(n),address(address), sections(sec), phoneNumber(no), teacherList(list) 
{

}

void Teacher::showListOfTeachers() {
    ifstream inputFile("Teacher.txt");
    if (!inputFile.is_open()) {
        cerr << "Failed to open the file.\n";
        return;
    }
    string teacherName;
    while (getline(inputFile, teacherName)) {
        cout << teacherName << endl;
        teacherList.push_back(teacherName); // Store each student name in the vector
    }
    inputFile.close();
}

void Teacher::addTeacher(const string& id, const string& name, const string& department) {
    // Construct the teacher information string
    string teacherInfo = id + " " + name + " " + department;

    // Open the file in append mode
    ofstream outputFile("Teacher.txt", ios::app);
    if (!outputFile.is_open()) 
    {
        cerr << "Failed to open the file.\n";
        return;
    }

    // Write the new teacher's information to the file
    outputFile << teacherInfo << endl;

    // Close the file
    outputFile.close();
}

