#include <iostream>
#include <string>
#include <ctime> // time이나 locatime함수 라이브러리

using namespace std;

class Person {
private:
	const int id;
	string name;
public:
	static int count;
	Person(int id, string name) : id(id), name(name) {
		count++;
	}
	/*
	* void setId(int id{
	*	this->id = id; // 오류 발생 [수정 불가능]
	* }
	*/
};

int Person::count = 0;

int main(void) {
	Person p1(1, "박강민");
	Person p2(2, "홍길동");
	Person p3(3, "임꺽정");
	cout << "사람의 수 : " << Person::count << '\n';

	return 0;
}