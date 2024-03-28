#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>
using namespace std;

class Teacher {
private:
    int teacherid, phoneNumber;
    string teacher_name,address;
    vector<string> sections;  // Sections in which the students enroll
    vector<string> teacherList; // Vector to store student names

public:
    Teacher();
    Teacher(int id, string n,string address ,vector<string> sec, int no, vector<string> list);
    void showListOfTeachers();
    void addTeacher(const string& id, const string& name, const string& department);
};