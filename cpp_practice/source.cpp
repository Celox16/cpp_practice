#include <iostream>
#include <string>
#include <ctime> // time이나 locatime함수 라이브러리

using namespace std;

class Time {
	friend class Date; // Date 클래스에서 Time 클래스를 이용할 수 잇음
private:
	int hour, min, sec;
public:
	void setCurrentTime() {
		time_t currentTime = time(NULL);
		struct tm* p = localtime(&currentTime);
		hour = p->tm_hour;
		min = p->tm_min;
		sec = p->tm_sec;
	}
};

class Date {
private:
	int year, month, day;
public:
	Date(int year, int month, int day) : year(year), month(month), day(day) { }
	void show(const Time& t) {
		cout << "지정된 날짜 : " << year << "년" << month << "월" << day << "일" << '\n';
		cout << "현재 시간 : " << t.hour << ":" << t.min << ":" << t.sec << '\n';
	}
};

int main(void) {
	Time time;
	time.setCurrentTime();
	Date date = Date(2020, 7, 23);
	date.show(time);
	
	return 0;
}