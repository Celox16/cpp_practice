#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Data {
private:
	T data;
public:
	Data(T data) : data(data) {}
	void setData(T data) { this->dta = data; }
	T getData() { return data; }
};

int main(void) {
	Data<int> data1(1);
	Data<string>data2("�ڰ���");
	cout << data1.getData() << ":" << data2.getData() << '\n';

	return 0;
}