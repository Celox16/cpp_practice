#include <iostream>
#include <map>

using namespace std;

int main(void) {
	map<string, int> m;
	m["�ڰ���"] = 1; m["ȫ�浿"] = 2; m["�Ӳ���"] = 3;
	map<string, int>::iterator iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}
	m["�̼���"] = 4;
	cout << m["���� ���"] << endl;
	iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}

	return 0;
}