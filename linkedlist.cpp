//
//  linkedlist.cpp
//  first 250 project
//
//  Created by William 😜 on 3/21/24.
//

#include <iostream>
#include <string>

#include "linkedlist.h"
using namespace std;


/*
 void addCourse(std::string code, int hours, std::string grade);
 void deleteCourse(std::string code);
 void deleteAllNodes();
 void displayList();
 */

void LinkedList::addCourse(string code, int hours, double grade) {
    CourseNode *newNode;
    CourseNode *nodePtr;
    
    newNode = new CourseNode;
    newNode->courseCode = code;
    newNode->creditHours = hours;
    newNode->courseGrade = grade;
    
    
    if(!head) {
        head = newNode;
    } else {
        nodePtr = head;
        while(nodePtr->next) {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode;
    }
    
}

void LinkedList::deleteCourse(string code) {
    CourseNode *nodePtr = head;
    CourseNode *prevPtr = nullptr;
    
    if (!head) {
        cout << "\nEmpty List\n";
        return;
    }
    
    if (head->courseCode == code) {
        head = head->next;
        delete nodePtr;
        return;
    }
    
    while (nodePtr != nullptr && nodePtr->courseCode != code) {
        prevPtr = nodePtr;
        nodePtr = nodePtr->next;
    }
    
    if (!nodePtr) {
        cout << "\nCourse with code " << code << " not found\n";
        return;
    }
    
    prevPtr->next = nodePtr->next;
    delete nodePtr;
}


void LinkedList::deleteAllNodes() {
    CourseNode* current = head;
    while(current) {
        CourseNode* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}

void LinkedList::displayList() {
    CourseNode* nodePtr;
    nodePtr = head;
    if(!head) {
        cout << "Empty List.\n";
    }
    while(nodePtr) {
        cout << "Course code: " << nodePtr->courseCode << " Credit hours: " << nodePtr->creditHours << " Course grade: " << nodePtr->courseGrade << endl;
        nodePtr = nodePtr->next;
    }
}
