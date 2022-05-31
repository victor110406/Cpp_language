#include <iostream>
#include <string>
using namespace std;

//생성자
//클래스를 가지고 객체를 생성하면, 해당 객체는 메모리에 즉시 생성
//모든 멤버 변수를 초기화하기 전에는 사용불가
//객체의 멤버 변수는 private 멤버도 있음으로 일반적인 초기화 방식으로 초기화 할 수 없다.
class Student {
private:
	int rank;
public:
	Student(const string& name,int avg);
	string name;
	int avg;
	void set_rank(int avg);

};

int main() {
	Student my_student("홍원산", 95);
	cout << my_student.name;
	return 0;
}

Student::Student(const string& name_, int avg_) {
	name = name_;
	avg = avg_;
	set_rank(avg);
}

void Student::set_rank(int avg) {
	rank = avg % 10;
}
