#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>
using namespace std;
class Course {
private:
    int Courseid, courseCode;
    string name;
    vector<string> sections;  // Sections in which the students enroll
    vector<string> courseList; // Vector to store student names

public:
    Course();
    Course(int id, string n, int code, vector<string> list);
    void showListOfCourses();
    void addCourse(const string& name, const string& teacher, const string& course_code);
};
