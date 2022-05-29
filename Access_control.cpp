#include<iostream>
using namespace std;

//C++은 정보 은닉을 위해 접근 제어기능을 제공한다.
//접근 제어란 접근 제어 지시자를 사용해 클래스 외부에서의 직접적인 접급을 허용하지 않는 멤버를 설정할 수 있도록 하여, 정보 은닉을 구체화

//접급 제어 지시자
//1.public
//public 접근 제어 지시자를 사용하여 선언된 클래는 멤버는 외부로 공개하며, 프로그램 어디에서나 접근할 수 있는 객체이다.
//public 멤버 하수는 행당 객체의 private 멤버와 프로그램 사이의 인터페이스 역할을 한다.

//2.private
//private 접근 제어 지시자를 사용항여 선언된 클래스 멤버는 외부에 공개되지 않으며, 외부에서 접근이 불가
//private 멤버에 직접 접근할 수 없으며, public 멤버 함수를 통해서만 접근이 가능

//3.protected
//protected 멤버는 파생 클래스에 대해서는 public 멤버처럼 취급되면, 외분에서는 private멤버처럼 취급


class Student {
private:
	int story;
public:
	string name;
	int price;
	int rank;
};

int main() {

	return 0;
}