//
//  linkedlist.h
//  first 250 project
//
//  Created by William 😜 on 3/21/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>

using namespace std;
// Forward declaration of CourseNode


// Define LinkedList class
class LinkedList
{
private:
    
    struct CourseNode {
        string courseCode;
        int creditHours;
        double courseGrade;
        
        CourseNode *next;
    };
    
    CourseNode *head;

public:
    LinkedList() {
        head = nullptr;
    }
    ~LinkedList() {
        deleteAllNodes();
    }

    void addCourse(string code, int hours, double grade);
    void deleteCourse(string code);
    void deleteAllNodes();
    void displayList();
};

#endif // LINKEDLIST_H
