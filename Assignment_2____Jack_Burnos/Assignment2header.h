#pragma once
using namespace std;
#include <iostream>

//Node struct
struct Node {
	int data;
	Node* next;
	//constructor
	Node(const int& data, Node* next_ptr = nullptr) : data(data), next(next_ptr) {}
};

class LinkedList {
private:
	Node* head;
	Node* tail;
	int numItems = 0;
public:
	//constructor
	LinkedList() {
		head = nullptr;
		tail = nullptr;
		numItems = 0;
	}


	//function declarations
	void pushFront(int x);
	void pushBack(int x);
	int popFront();
	int popBack();
	int getFront();
	int getBack();
	void emptyList();
	void insert(size_t index, const int& data);
	bool remove(size_t index);
	size_t find(const int& data);

	//test function for my own use in display
	void printall() {
		//checkingg for emptiness
		if (head == nullptr && numItems == 0) {
			cout << "List is empty..." << endl;
			return;
		}
		//emptying
		Node* current = head;
		while (current != nullptr) {
			cout << current->data << "  ";
			current = current->next;
		}
		cout << endl;
	}

};

class Stack {
private:
	size_t numItems;
	size_t currentCap;
	static const size_t initialCap = 20;
	int* data;
public:
	int getSize() { return numItems; }
	Stack();
	int& operator[](size_t index);
	void resize(int cap);
	void stackAdd(int value);
	int stackPop();
	int stackTop();
	bool isEmpty();
	double average();

	void print() {
		for (int i = 0; i < numItems; i++) {
			cout << data[i] << "   ";
		}
	}

};

