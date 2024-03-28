//
//  main.cpp
//  first 250 project
//
//  Created by William 😜 on 3/21/24.
//

#include <iostream>
#include <string>

#include "linkedlist.h"
using namespace std;

int main()
{
    LinkedList list;

    string code;
    double grade;
    
    int hours;
    // Add ten courses
    for (int i = 0; i < 2; ++i) {
        
        cout << "Enter Course Code: ";
        getline(cin, code);
        cout << "Enter Credit Hours: ";
        cin >> hours;
        cout << "Enter Grade: ";
        cin >> grade;
        cout << endl;
        cin.ignore();
        list.addCourse(code, hours, grade);
    }

    // Display the list before deletion
    cout << "Before Deletion:" << endl;
    list.displayList();

    // Delete two courses (you can choose which ones)
    list.deleteCourse("CSDP250");
    list.deleteCourse("MATH101");

    // Display the list after deletion
    cout << "After Deletion:" << endl;
    list.displayList();

    return 0;
}
