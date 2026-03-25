#include <iostream>
using namespace std;

//base case
//fib(1) --> 0
//fib(2) --> 1

//recursion case
//fib(n-1) + fib(n-2)

long long fibonachi(int index) {
	if (index <= 0) {
		return -1;
	}

	//base-case
	if (index <= 2) {
		return index - 1;
	}

	//recursion-case
	return fibonachi(index - 1) + fibonachi(index - 2);
}



int main() {
	cout << fibonachi(11) << endl;
	return 0;
}