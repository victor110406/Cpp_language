#include <iostream>
#include <string>
using namespace std;

//소멸자
//객체의 수명이 끝나면 생성자의 반대 역할을 수행할 멤버 함수도 필요해진다. 이러한 역할을 하는 멤버 함수를 소멸자라고 한다.
//소멸자는 객체의 수명이 끝나면 컴파이러에 의해 자동으로 호출되며, 사용이 끝난 객체를 정리해 준다.
//클래스 소멸자의 이름은 해당 클래스의 이름과 같으며, 이름 앞에 물결 표시를 붙여 생성자와 구분
// ~Student();

//소멸자의 특징
//1.소멸자는 인수를 가지지 않는다.
//2.소멸자는 반환값이 없지만 void형으로 선언하지 않는다.
//3.객체는 여러 개의 생성자를 가질 수 있지만, 소멸자는 단 하나만 가질 수 있따.

//데이터 영역: 해당 프록램이 종료될 때
//스택 영역: 해당 객체가 정의된 블록을 벗어날 때
//힙:delete를 사용하여 해당 객체의 메모리를 반환할 때
//임시 객체: 임시 객체의 사용을 마쳤을 때

class Student {
private:
	int rank;
public:
	Student(const string& name,int avg);
	~Student();
	string name;
	int avg;
	void set_rank(int avg);

};

int main_rbettejq() {
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

Student::~Student() {

}
