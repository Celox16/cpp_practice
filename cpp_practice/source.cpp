#include <iostream>
#include <string>

using namespace std;

class Temp {
public:
	void showTemp() {
		cout << "Temporary parent class\n";
	}
};

class Person {
private:
	string name;
public:
	Person() { name = "È«±æµ¿"; }
	Person(string name) : name(name) { }
	void showName() {
		cout << "ÀÌ¸§ : " << name << '\n';
	}
};

int main(void) {
	Person person1;
	person1.showName();
	Person person2("¹Ú°­¹Î");
	person2.showName();

	return 0;
}