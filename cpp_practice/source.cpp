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
	Person() { name = "ȫ�浿"; }
	Person(string name) : name(name) { }
	void showName() {
		cout << "�̸� : " << name << '\n';
	}
};

int main(void) {
	Person person1;
	person1.showName();
	Person person2("�ڰ���");
	person2.showName();

	return 0;
}