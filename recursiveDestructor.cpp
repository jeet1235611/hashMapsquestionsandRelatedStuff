#include <iostream>
#include <string>

using namespace std;

class LNode {
	public:
	int data;
	LNode* next;

	LNode(int n) {
		data = n;
		next = nullptr;
	}

	void add_to_end(int n) {
		if(next)
			next -> add_to_end(n);
		else
			next = new LNode(n);
	}
	~LNode() {
		cout << "I am from LNode Destructor " << endl;
		delete next;
	}
};

int main() {
	LNode root(1);
	root.add_to_end(2);
	root.add_to_end(3);
	root.add_to_end(4);
}
