#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

using namespace std;

class Student {
private:
    int Studentid, phoneNumber;
    string name;
    vector<string> sections;  // Sections in which the students enroll
    vector<string> studentList; // Vector to store student names

public:
    Student();
    Student(int id, string n, vector<string> sec, int no, vector<string> list);
    void showListOfStudents();
    void addStudent(const string& newStudent, const string& className, const string& enrollment);
    void removeStudent(const string& studentToRemove);
};