#include <iostream>
#include <vector>
#include <string>
#include "Student.h"
#include"Teacher.h"
#include"Course.h"
//#include"Room.h"
//#include"Timetable.h"
using namespace std;

void displayOptionsForStudents() {
    cout << "Enter Your Choice:\n";
    cout << "1. Show the list of students\n";
    cout << "2. Remove a student\n";
    cout << "3. Add a student\n";
    cout << "4. Proceed further\n";
}
void displayOptionsForTeachers() {
    cout << "Enter Your Choice:\n";
    cout << "1. Show the list of teachers: \n";
    cout << "2. Add a teacher\n";
    cout << "3. Proceed further\n";
}
void displayOptionsForCourses()
{
    cout << "Enter Your Choice:\n";
    cout << "1. Show the list of courses: \n";
    cout << "2. Add a course:\n";
    cout << "3. Proceed further:\n";
}
int main() {
    Student st;
    Teacher teach;
    Course course;
    int choice1,choice2,choice3;
    displayOptionsForStudents();
        cin >> choice1;

        switch (choice1) {
        case 1:
            st.showListOfStudents();
            break;
        case 2: {
            string studentName;
            cout << "Enter the name of the student to remove: ";
            cin >> studentName;
            st.removeStudent(studentName);
            break;
        }
        case 3: {
            string newStudentName, className, enrollment;
            cout << "Enter the name of the new student: ";
            cin >> newStudentName;
            cout << "Enter the class: ";
            cin >> className;
            cout << "Enter the enrollment: ";
            cin >> enrollment;
            st.addStudent(newStudentName,className,enrollment);
            st.showListOfStudents(); // Display updated list of students
            break;
        }
        case 4:
            cout << "Proceed further:\n";
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
        displayOptionsForTeachers();
        cin >> choice2;

        switch (choice2) {
        case 1:
            teach.showListOfTeachers();
            break;
        case 2: {
            string name, Id, department;
            cout << "Enter the name of the new teacher: ";
            cin >> name;
            cout << "Enter the Id: ";
            cin >> Id;
            cout << "Enter the department: ";
            cin >> department;
           teach.addTeacher(Id,name, department);
            teach.showListOfTeachers(); // Display updated list of students
            break;
        }
        case 3: {
            cout << "Proceed further:\n";
            break;
        }
           
        default:
            cout << "Invalid choice\n";
            break;
        }
        displayOptionsForCourses();
        cin >> choice2;

        switch (choice2) {
        case 1:
            course.showListOfCourses();
            break;
        case 2: {
            string name,teacher, course_code;
            cout << "Enter the name of the new course: ";
            cin >> name;
            cout << "Enter the teacher: ";
            cin >> teacher;
            cout << "Enter the course code: ";
            cin >> course_code;
            course.addCourse(name, teacher, course_code);
            course.showListOfCourses(); // Display updated list of students
            break;
        }
        case 3: {
            cout << "Proceed further:\n";
            break;
        }

        default:
            cout << "Invalid choice\n";
            break;
        }
    return 0;
}
