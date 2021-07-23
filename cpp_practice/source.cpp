#include <iostream>
#include <map>

using namespace std;

int main(void) {
	map<string, int> m;
	m["박강민"] = 1; m["홍길동"] = 2; m["임꺽정"] = 3;
	map<string, int>::iterator iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}
	m["이순신"] = 4;
	cout << m["없는 사람"] << endl;
	iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}

	return 0;
}