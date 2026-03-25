#include <iostream>
using namespace std;

void test(int counter) {
	cout << counter << "\n";
	test(++counter);
}

int main() {
	test(1);
	return 0;
}