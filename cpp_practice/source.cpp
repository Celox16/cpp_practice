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

int main(void) {
	string a = "¹Ú°­¹Î";
	string b = "È«±æµ¿";
	change(a, b);
	cout << a << ":" << b << endl;

	return 0;
}