#include "Assignment2header.h"

//linked list function implementations

void LinkedList::pushFront(int x) {
	//checking if list is empty
	if (numItems==0) {
		head = new Node(x);
		//making tail and head the same since only one item
		tail = head; 
	}
	//if list isnt empty... making new node that points to head, then reassigning head
	else {
		Node* newer = new Node(x, head);
		head = newer;
	}
	//incrementing numItems
	numItems++;
}

void LinkedList::pushBack(int x) {
	//checking if empty
	if (numItems == 0) {
		head = new Node(x);
		tail = head;
	}
	//making a new node, having tail point to it, then reassigning tail
	else {
		Node* newer = new Node(x, nullptr);
		tail->next = newer;
		tail = newer;
	}
	

	//incrementing
	numItems++;
}

int LinkedList::popFront() {
	//checking if list is empty
	if (numItems == 0) {
		cout << "no items in list to pop; list is empty" << endl;
		return -1;
	}
	else {
		Node* old = head;  // storing head in a new place
		int val = old->data;
		//seeing if head is the only node in list... if not, make new head
		if (head->next != nullptr) {
			head = old->next;
			delete old;
			numItems--;  //decrementing
			return val;
		}
		//if it is the only node, empty list and reset head/tail
		else {
			numItems--;  //decrementing
			delete old;
			head = nullptr;
			tail = nullptr;
			return val;
		}
	}

}

int LinkedList::popBack() {
	//handling if there is only one node
	int val;
	if (head == tail&&numItems==1) {
		val = head->data;
		//clearing space and resetting head/tail
		delete head;
		head = nullptr, tail = nullptr;
		numItems--; //decrementing;
		return val;
	}
	//case for list with more than one node
	else {
		val = tail->data;
		Node* current = head;
		//traversing list to get have current be the second to last
		while (current->next->next != nullptr) {
			current = current->next;
		}
		//getting rid of old tail and setting new one
		Node* oldtail = tail;
		tail = current;
		tail->next = nullptr;
		delete oldtail;
		numItems--; //decrementing
		return val;
	}
}

int LinkedList::getFront() {
	if (head != nullptr) return head->data;
	else return -1;
}

int LinkedList::getBack() {
	if (tail != nullptr) return tail->data;
	else return -1;
}

void LinkedList::emptyList() {
	//making sure list isnt already empty, outputting appropriate message
	if (head == nullptr && tail == nullptr) {
		cout << "list already empty" << endl;
		return;
	}
	else {
		Node* current = head;
		//deleting items in loop using current (O(n) complexity);
		while (current != nullptr) {
			Node* nextNode = current->next;
			delete current;
			current = nextNode;
		}
		head = nullptr, tail = nullptr;
		numItems = 0;  //resetting numItems

	}
}

void LinkedList::insert(size_t index, const int& data) {
	//checking if list is empty
	if (head == nullptr && numItems == 0) {
		pushFront(data);
		return;
	}
	//seeing if index is out of range
	if (index > numItems - 1) {
		pushBack(data);//recycling
		return;
	}
	//handling case if wanting to insert at beginning
	if (index == 0) {
		pushFront(data);
		return;
	}
	//iterating to find node before where we want to put our node
	Node* current = head;
	for (int i = 0; i < index - 1; i++) {
		current = current->next;
	}
	//inserting
	Node* newer = new Node(data,current->next);
	current->next = newer;
	numItems++; //incrementing

}

bool LinkedList::remove(size_t index) {
	//checking if index is out of range, returning false if so
	if (index > numItems - 1) {
		cout << "index is not in list" << endl; // [0\_/0] robot
		return false;
	}
	//checking if list is empty
	if (head == nullptr && numItems == 0) {
		cout << "Nothing to remove; list is empty" << endl;
		return false;
	}
	//cheking if needing to remove front or back
	if (index == 0) {
		int f = popFront();
		return true;
	}
	if (index == numItems - 1) {
		int b = popBack();
		return true;
	}
	//iterating to find index
	Node* current = head;
	for (int i = 0; i < index - 1;i++) {
		current = current->next;
	}
	//deleting
	Node* temp = current->next;
	current->next = current->next->next;  //skipping over node were removing
	delete temp;
	numItems--; //decrementing
	return true;

}

size_t LinkedList::find(const int& x) {
	//checking for empty list
	if (head == nullptr && numItems == 0) {
		return numItems;
	}

	//finding value in list (O(n))
	Node* current = head;
	size_t index = 0; //counter
	while (current != nullptr) {
		if (current->data == x) {
			return index;
		}
		else {
			current = current->next;
			index++;
		}
	}
	return numItems;

}


// stack function implmentations
Stack::Stack() {
	data = new int[initialCap];
	currentCap = initialCap;
	numItems = 0;
}