#include <iostream>
#include <string>
#include <ctime> // time이나 locatime함수 라이브러리

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
	Person p1("박강민");
	Person p2("홍길동");
	Person p3("임꺽정");
	cout << "사람의 수 : " << Person::count << '\n';

	return 0;
}