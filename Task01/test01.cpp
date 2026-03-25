#include <iostream>
using namespace std;

void test() {
	cout << "testing...\n";
	test();
}

int main() {
	test();
	return 0;
}