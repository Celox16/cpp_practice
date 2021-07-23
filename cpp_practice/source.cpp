#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string name) : name(name) { }
	string getName() {
		return name;
	}
	void showName() {
		cout << "이름 : " << getName() << '\n';
	}
};

class Student : Person {
private:
	int studentID;
	// 맴버 변수 name은 Person으로부터 물려 받음.
public:
	Student(int studentID, string name) : Person(name) {
		// 부모에 해당하는 Person생성자를 불러와 name을 넣음
		this->studentID = studentID;
	}
	void show() {
		cout << "학생 번호 : " << studentID << '\n';
		cout << "학생 이름 : " << getName() << '\n';
	}
	void showName() {
		cout << "학생 이름 : " << getName() << '\n';
	}
};

int main(void) {
	Student student(1, "박강민");
	student.showName();

	return 0;
}