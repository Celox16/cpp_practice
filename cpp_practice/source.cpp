#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person() { name = "È«±æµ¿"; }
	Person(string name) :name(name) {}
	Person operator+(const Person& other) { return Person(name + " & " + other.name); }
	void showName() { cout << "ÀÌ¸§ : " << name << '\n'; }
};

int main(void) {
	Person person1;
	Person person2("¹Ú°­¹Î");
	Person result = person1 + person2;
	result.showName();

	return 0;
}