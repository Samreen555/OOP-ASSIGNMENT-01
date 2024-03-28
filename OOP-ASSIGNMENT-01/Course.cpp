#include "Course.h"
#include "Student.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>
using namespace std;
Course::Course() { }
Course::Course(int id, string n, int code, vector<string> list) : Courseid(id), name(n), courseCode(code), courseList(list)
{

}
void Course::showListOfCourses() {
    ifstream inputFile("Course.txt");
    if (!inputFile.is_open()) {
        cerr << "Failed to open the file.\n";
        return;
    }
    string courseName;
    while (getline(inputFile, courseName)) {
        cout << courseName << endl;
        courseList.push_back(courseName); // Store each student name in the vector
    }
    inputFile.close();
}
void Course::addCourse(const string& name, const string& teacher, const string& course_code)
{
    // Construct the student information string
    string courseInfo = name + " " + teacher + " " + course_code;
    // Add new student to the vector
    courseList.push_back(courseInfo);
    // Open the file in append mode
    ofstream outputFile("Course.txt", ios::app);
    if (!outputFile.is_open()) {
        cerr << "Failed to open the file.\n";
        return;
    }
    // Write the new student's information to the file
    outputFile << courseInfo << endl;
    // Close the file
    outputFile.close();
}
