#include <iostream>
using std::cout;
using std::endl;

struct node {
	int value;
	node *next;
	node(int value): value(value), next(NULL) {}
	node(int value, node *next): value(value), next(next) {}
};

class list {
private:
	node *head;
public:
	list();
	void insert(int value);
	void dump(void);
	void append(int value);
};

list::list() {
	head = NULL;
}

void list::insert(int value) {
	head = new node(value, head);
}

void list::append(int value) {
	if(head) {
		node *tmp = head;
		while (tmp -> next) {
			tmp = tmp -> next;
		}
		tmp -> next = new node(value); 
	} else {
		head = new node(value);
	}
}

void list::dump(void) {
	for (node *n = head; n; n = n -> next) {
		cout << n -> value << endl;
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