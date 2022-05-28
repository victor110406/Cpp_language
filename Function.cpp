#include<iostream>
using namespace std;

//함수의 인수전달
//함수가 참조자를 인수로 전달받으면, 참조자가 참조하고 있는 실제 변수의 값을 조작가능
void swap(int& c, int& d);

//인라인 함수
//인라인 함수는 호출될 때 일반적인 함수의 호출 과정을 거치지 않고, 함수의 모든 코들르 호출딘 자리에 바로 삽입하는 방식이다.
//코드가 매우 적은 함수만을 인라인 함수로 선언
inline int MAX(int a, int b) { return a > b ? a : b; }
inline void printf(int x) { cout << "Hello Wolrd!\n"; }

int main() {

	//C++에서는 특정 변수의 실제 이름 대신 사용할 수 있는 참조자 기능 추가
	int a = 10;
	int& b = a;
	//& 연산자는 주소 연산자가 아닌 타입을 식별하기 위한 식별자
	//주의 사항
	//1.참조자의 타입은 대상이 되는 변수의 타입과 일치해야한다.
	//2.참조자는 선언과 동시에 초기화
	//3.참조자는 한 번 초기화하면, 변경할 수 없다.
	cout << "a의 값: " << a << " 참조자 b의 값: " << b << endl;

	int c = 20, d = 40;
	cout << "c의 값: " << c << " d의 값: " << d << endl;
	swap(c, d);
	cout << "c의 값: " << c << " d의 값: " << d << endl;

	cout << MAX(c, d) << endl;
	printf(c);

	return 0;
}

void swap(int& c, int& d) {
	int temp = c;
	c = d;
	d = temp;
}