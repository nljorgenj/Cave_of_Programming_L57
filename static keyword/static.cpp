#include <iostream>
#include <string>

using namespace std;

class Test {
private:
	int id;
	static int count;

public:
	// Initialisation of const must be done right here!
	static int const MAX = 99;
	static void showInfo() { cout << count << endl;	}
	Test() { id = ++count;}
	int getId() { return id; }
};

int Test::count = 0;

int main() {

	cout << Test::MAX << endl;
	
	Test test1;
	cout << "Object 1 ID: " << test1.getId() << endl;

	Test test2;
	cout << "Object 2 ID: " << test2.getId() << endl;

	Test::showInfo();


	return 0;
}
