#include <iostream>
#include <string>
using namespace std;

//디폴트 생성자
//디폴트 생성자는 객체가 생성될 때 사용자가 초깃값으 명시하지 않으면, 컴파일러가 자동으로 제공
//디폴트 생성자는 사용자로부터 인수를 전달받지 않으므로, 매개변수를 가지지 않는다.
//매개변수를 가지지 않으면 대부분의 디폴트 생성자가 0이나 NULL, 빈 문자열 등으로 초기화

class Student {
private:
	int rank;
public:
	Student(const string& name_, int avg_ = 80);
	string name;
	int avg;
	void set_rank();
};

int main() {
	Student my_student("홍원산");
	return 0;
}

Student::Student(const string& name_, int avg_) {
	name = name_;
	avg = avg_;
	set_rank();
}

void Student::set_rank() {
	rank = avg % 10;
}