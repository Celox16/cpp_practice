#include <iostream>
#include <string>
#include <ctime> // time�̳� locatime�Լ� ���̺귯��

using namespace std;

class Person {
private:
	string name;
public:
	static int count;
	Person(string name) : name(name) {
		count++;
	}
};

int Person::count = 0;

int main(void) {
	Person p1("�ڰ���");
	Person p2("ȫ�浿");
	Person p3("�Ӳ���");
	cout << "����� �� : " << Person::count << '\n';

	return 0;
}