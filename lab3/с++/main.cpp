#include <iostream>
#include <string>
#include <fstream>
#include <stack>
using namespace std;

class Stack {
	struct Node {
		Node* next;
		int data;
		Node(int data = 0, Node* next = nullptr): data(data),next(next) {}
	};

	int size = 0;
	Node* head = nullptr;

public:
	void push(int n) {
		if (!head) {
			head = new Node(n);
		}
		else {
			Node* tmp = head;
			
			while (head->next) {
				tmp = tmp->next;
			}
			
			tmp->next = new Node(n);

		}
		size++;
	}
	int pop() {
		if (head) {
			int data;

			if (!head->next) {
				data = head->data;
				delete head;
				head = nullptr;

				return data;
			}
			else {
				Node* tmp = head;
				while (tmp->next->next) {
					tmp = tmp->next;
				}

				data = tmp->next->data;

				delete tmp->next;
				tmp->next = nullptr;
				return data;

			}
			size--;
		}
	}
	bool isEmpty() {
		return size == 0;
	}
};

class Expresion {
	stack<int> paratheses;
	string expresion;
public:
	Expresion(string filename) {
		ifstream input;
		input.open(filename);

		while (getline(input, expresion)) {

			cout << expresion << endl;
			for (char ch : expresion) {
				switch (ch) {
				case '(':
					paratheses.push(1);
					break;
				case ')':
					if (!paratheses.empty()) {
						paratheses.pop();
					}
					else {
						cout << "Expression is wrong" << endl;
						return;
					}
					break;
				}
			}

			if (!paratheses.empty()) {
				cout << "Expression is wrong" << endl;
			}
			else {
				cout << "Expression is right" << endl;
			}
		}
	}


};

int main() {
	
	Expresion expresion("file.txt");

	system("pause");
	return 0;
}
