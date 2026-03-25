#include <iostream>
using namespace std;

long long factorial(int number) {
	if (number < 0) {
		return -1;
	}

	//base-case
	if (number <= 1) {
		return 1;
	}

	//recursion-case
	return number * factorial(number - 1);  
}

void test(int counter) {
	cout << counter << "\n";
	test(++counter);
}

int main() {
	cout << factorial(5) << endl;
	return 0;
}