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
		cout << "�̸� : " << getName() << '\n';
	}
};

class Student : Person {
private:
	int studentID;
	// �ɹ� ���� name�� Person���κ��� ���� ����.
public:
	Student(int studentID, string name) : Person(name) {
		// �θ� �ش��ϴ� Person�����ڸ� �ҷ��� name�� ����
		this->studentID = studentID;
	}
	void show() {
		cout << "�л� ��ȣ : " << studentID << '\n';
		cout << "�л� �̸� : " << getName() << '\n';
	}
	void showName() {
		cout << "�л� �̸� : " << getName() << '\n';
	}
};

int main(void) {
	Student student(1, "�ڰ���");
	student.showName();

	return 0;
}