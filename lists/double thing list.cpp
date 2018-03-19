#include <iostream>
using std::cout;
using std::endl;

template<class T>
class node {
public:
	T value;
	node<T> *next;
	node<T> *prev;

	node(int value, node *next, node *prev): value(value), next(next), prev(prev){}
	node(int value): node(value, this, this){}

	void insert(node *other);
};

template<class T>
class list {
private:
	node<T> head;
public:
	list(): head(0){}

	void insert(int value);
	void append(int value);
	void dump(void);
};

void node::insert(node *other) {
	next = other;
	prev = other -> prev;
	next -> prev = prev -> next = this;
}

void list::insert(int value) {
	(new node(value)) -> insert(head.next);
}

void list::append(int value) {
	(new node(value)) -> insert(&head);
}

void list::dump(void) {
	for(node *tmp = head.next; tmp != &head; tmp = tmp -> next) {
		cout << tmp -> value << endl;
	}
}

int main(int argc, char const *argv[])
{
	list l;

	l.insert(5);
	l.append(1);
	l.append(67);
	l.append(3);
	l.append(8);
	l.append(9);
	l.append(0);
	l.append(-1);

	l.dump();
	cout << endl;
	l.append(15);
	l.append(1000);

	l.dump();
	return 0;
}