#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person() { name = "ȫ�浿"; }
	Person(string name) :name(name) {}
	Person operator+(const Person& other) { return Person(name + " & " + other.name); }
	void showName() { cout << "�̸� : " << name << '\n'; }
};

int main(void) {
	Person person1;
	Person person2("�ڰ���");
	Person result = person1 + person2;
	result.showName();

	return 0;
}