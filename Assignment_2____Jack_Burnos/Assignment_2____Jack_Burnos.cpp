// Assignment_2____Jack_Burnos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//CS303
#include "Assignment2header.h"

int main()
{

    //calling functions on linked list
    LinkedList list;
    //loading listt
    cout << "List initially loaded with 6 values using push front/back. Sequence should be '43 61 55 23 82 90' " << endl << endl;
    list.pushFront(23);
    list.pushFront(55);
    list.pushFront(61);
    list.pushBack(82);
    list.pushBack(90);
    list.pushFront(43);
    list.printall();

    //outputting the values from getting front and back
    cout << "Returning both front and back:" << endl << endl;
    cout << "Front value is: " << list.getFront() << "     Back value is: " << list.getBack() << endl << endl;

    //popping front and returning
    int front = list.popFront();
    cout << "Popping and returning front value:" << endl;
    cout << "Front value was: " << front << "    It was removed. New front is: " << list.getFront() << endl << endl;
    cout << "New list: ";
    list.printall();
    cout << endl;

    //popping back and returning
    int back = list.popBack();
    cout << "Popping and returning back value:" << endl;
    cout << "Back value was: " << back << "    It was removed. New back is: " << list.getBack() << endl << endl;
    cout << "New list: ";
    list.printall();
    cout << endl;

    //inserting 3 new values
    cout << "Inserting 3 new values. 65 at index 3, 99 at index 0, and 34 at index 13:" << endl << endl;
    cout << "New list: ";
    list.insert(3, 65);
    list.insert(13, 34);
    list.insert(0, 99);
    list.printall();

    //removing 3 indices test
    cout << "Removing indices 4, 0, and 16:" << endl << endl;
    list.remove(4);
    list.remove(0);
    list.remove(16);
    cout << "New list: ";
    list.printall();

    //finding things
    cout << endl << endl << "Finding elements 61, 82, and 777 in list: " << endl << endl;
    size_t one = list.find(61);
    size_t two = list.find(82);
    size_t three = list.find(777);
    cout << "61 found at: " << one << "   82 found at: " 
        << two << "    777 found at: " << three << " (numItems)" << endl << endl;

    //emptying list
    cout << "Emptying list: " << endl;
    list.emptyList();
    cout << "New list: ";
    list.printall();


    //stack testing

    //creating stack object
    Stack stack;
    cout << endl << "~~~~~~~~~~~~~~~STACK~~~~~~~~~~~~~~" << endl << endl;

    //checking empty status
    cout << endl << "Checking if new stack is empty: " << endl;
    stack.isEmpty();

    //loading stack
    cout << endl << "Adding values 33, 55, 21, 68, 90, 10, and 88 to stack in that order" << endl;
    stack.stackAdd(33);
    stack.stackAdd(55);
    stack.stackAdd(21);
    stack.stackAdd(68);
    stack.stackAdd(90);
    stack.stackAdd(10);
    stack.stackAdd(88);

    //removing 88 from stack
    cout << "Current stack from last to first: ";
    stack.print();
    cout << endl << endl;
    cout << "Removing top element from stack: " << endl;
    int c = stack.stackPop();
    cout << "Element '" << c << "' removed. New top is " << stack.stackTop() << endl << endl;
    cout << endl << "New Stack: ";
    stack.print();

    //finding average
    cout << endl << endl << "Finding average of stack: " << endl;
    cout << "Average is:  " << stack.average() << endl << endl;

}
