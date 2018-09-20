#include <iostream>

template<typename T>
class Queue {
	template<typename T>
	struct Node {
		T data;
		Node* next;
		
		Node(T data = T(),Node* next = nullptr):data(data),next(next){}

	};
	Node<T>* head = nullptr;
	int size = 0;
public:
	void push(T data) {
		if (head != nullptr) {
			Node<T>* tmp = head;

			while (tmp->next != nullptr) {
				tmp = tmp->next;
			}

			tmp->next = new Node<T>(data);
		}
		else {
			head = new Node<T>(data);
		}
		size++;
	}

	bool isEmpty() {
		return size == 0;
	}

	bool isFull(int amount) {
		return (size >= amount);
	}

	T pop() {
		if (head) {
			Node<T>* tmp = head;
			T data = head->data;

			head = head->next;

			delete tmp;
			size--;
			return data;
		}
		else {
			return 0;
		}
	}

};

int main() {

	Queue<int> queue;

	for (int i = 0; i < 300; i++) {
		queue.push(rand() % 100);
	}

	if (queue.isFull(5)) {
		std::cout << "Queue is full ( has more than 5 elements ) " << std::endl;
	}

	while(!queue.isEmpty()) {
		std::cout << queue.pop() << std::endl;
	}



	system("pause");
	return 0;
}