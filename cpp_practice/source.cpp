#include <iostream>
#include <string>

using namespace std;

template <typename T>
void change(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<>
void change<int>(int& a, int& b) {
	cout << "integer data change.\n";
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int a = 7;
	int b = 5;
	change(a, b);
	cout << a << ":" << b << endl;

	return 0;
}