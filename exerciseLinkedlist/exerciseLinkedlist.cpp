#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};

class CircularLinkedlist {
private:
	Node* LAST;
public:
	CircularLinkedlist() {
		LAST = NULL;
	}

	void addnode();

	bool search(int rollno, Node** zuhair, Node** muhammad);
	bool listEmpty();
	bool delNode();
	void traverse();
};

void CircularLinkedlist::addnode() {//write your answer here
	int rollno;
	string nama;
	Node* nodeBaru = new Node()
		cout << "Masukkan Number :";
	cin >> rollno;



}
bool CircularLinkedlist::search(int rollno, Node** zuhair, Node** muhammad) {
	*zuhair = LAST->next;
	*muhammad = LAST->next;
	while (*muhammad != LAST) {
		if (rollno == (*muhammad)->rollNumber) {
			return true;
		}
		else {
			return false;
		}
	}
	bool CircularLinkedlist::listEmpty() {
		return  LAST == NULL;
	}
	bool Circularlinkedlist::delNode() {
		{

