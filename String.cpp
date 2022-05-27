#include<iostream>
#include<string>
using namespace std;

//C++ 문자열
//1.c언어 스타일 문자열
//2.string 클래스를 이용한 문자열

//NULL 문자
//C++에서는 문자형 배열로 선언된 문자열 변수는 문자열의 끝을 프로그램에서 따로 알려주어야 한다 그래야 실제 문자열에 속한 값과 그 외의 쓰레기값을 구분가능


int main() {

	char name[20];
	char subject[20];

	//단점
	//1.띄어쓰기가 들어가면 2개를 입력할 수 없다.
	//2.20바이트 이상의 이름이 들어가면 프로그램이 종료된다.
	/*
	cout << "이름을 입력하세요:";
	cin >> name;
	cout << "과목을 입력하세요:";
	cin >> subject;
	cout << "이름: " << name << " 과목: " << subject << endl;
	*/


	cout << "이름을 입력하세요:";
	cin.get(name, 20).get();
	cout << "과목을 입력하세요:";
	cin.get(subject, 20).get();
	cout << "이름: " << name << " 과목: " << subject << endl;
	//cin 객체는 띄어쓰기를 포함한 탭 문자, 캐리지 리턴 문자등을 모두 문자열의 끝으로 인식
	//띄어쓰기를 포함한 문자열을 전부 입력받으려면 cin객체의 get()메소드를 사용

	cout << "이름을 입력하세요: ";
	cin.get(name, 20).ignore(20, '\n');
	cout << "과목을 입력하세요: ";
	cin.get(subject, 20).ignore(20, '\n');
	cout << "이름: " << name << " 과목: " << subject << endl;
	//ignore()메소드는 20바이트가 넘어가게 입력이되면 정확히 20바이트까지만 입력을 받는다.

	//string을 이용하면 간단하게 문제가 해결가능
	string name1, subject1;
	cout << "이름을 입력하세요:";
	getline(cin, name1);
	cout << "과목을 입력하세요:";
	getline(cin, subject1);
	cout << "이름: " << name1 << " 과목: " << subject1 << endl;

	return 0;
}