#include<iostream>
using namespace std;

//클래스(class)
//클래스란 구조체의 상위 호환이다.
//구조체보다 좀 더 확장된 의미를 가진다.
// 구조체와 클래스의 차이는 기본 접근 제어의 차이일 뿐,거의 똑같다.

//객체 지향 프로그래밍
//객체 지향 프로그래밍에서 모든 데이터를 객체로 취급하며, 객체가 프로그래밍의 중신이다.

//객체 지향 프로그래밍의 특징
//1.추상화 2.캡슐화 3.정보은닉 4.상속성 5.다향성

//인스턴스(instance)
//선언되 해당 클래스 타입의 객체를 인스턴스라고 하며, 메모리에 대입된 객체이다.

//멤버 함수의 정의
//C++에서는 멤버 함수를 클래스의 선언 안이나 밖에서 모두 정의할 수 있다.
//클래스 선언 밖에서 멤버 함수를 정의할 때에는 범위 지정 연산자(::)를 사용하여 해당 함수가 어느 클래스에 속한지를 명시

class Student {
private: //private제어 지시자는 생략가능, 영역은 해당 객체 내의 멤버 변수나 멤버 함수만이 접근할 수 있다.
	int number;
public: //나머지 제어 지시자는 생략 불가능, 영역은 모든 객체에서 접근할 수 있다.
	string name;
	int price;
	void Move(int);
};

void Student::Move(int num) {number = num;}

int main() {

	Student my_student;
	my_student.Move(30);

	return 0;
}