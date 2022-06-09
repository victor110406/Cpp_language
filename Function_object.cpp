#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;
//1.함수 포인터
//2.함수 객체
//3.람다 표현식

//함수 객체의 장점
//1.함수 객체는 상태를 포함할 수 있다.
//2.함수 객체는 타입이므로, 템플릿 인수로 사용할 수 있다.

// plus + 
// greater >
// minus - 
// greater_equal >=
// multiplies * 
// less <
// divides / 
// less_equal <=
// modulus % 
// logical_and &&
// negate - 
// logical_or ||
// equal_to == 
// logical_not	!
// not_equal_to !=
int main() {
	plus<int> add;
	minus<int> mi;
	multiplies<int> goh;

	cout << add(7, 3) << endl;
	cout << mi(7, 3) << endl;
	cout << goh(7, 3) << endl;

	vector<int> vc = { 20, 40, 10, 30 }; // vector 객체의 선언 및 초기화
	sort(vc.begin(), vc.end(), greater<int>());
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	sort(vc.begin(), vc.end(), less<int>());
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));

	return 0;
}