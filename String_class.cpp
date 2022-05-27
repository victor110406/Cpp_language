#include<iostream>
#include<string>

using namespace std;

int main() {

	string str; //문자열을 선언
	str = "Hello World"; //문자열 초기화
	string str1 = "Hong"; // 문자열 선언,초기화
	//사용자가 길이를 명시하지 않아도 되며, 문자열의 길이에 대한 문제는 자동으로 처리해준다.

	//문자열 처리
	string str3 = "Hello World";
	string str4;
	str4 = str3;
	cout << str4 << endl;
	//string 객체를 이용한 문자열에서는 대입 연산자(=)만을 간단히 대입 작업을 할 수 있다.

	string str5 = "Hello ";
	string str6 = "World";
	string str7;
	str7 = str5 + str6;
	cout << str7 << endl;
	//string 객체를 이용하여 복합 대입 연산자나 append()메소드를 이용하여 손쉽게 추가나 결합가능

	//length()메소드와 size()메소드
	//length()메소드는 문자열의 길이를 반환한는 메소드
	//size()메소드는 객체가 메모리에서 실제 사용하고 있는 크기
	string str8 = "Hello";
	string str9 = "World";
	cout << "str8의 문자열 길이:" << str8.length() << endl;
	cout << "str9의 메모리 사용 크기:" << str9.size() << endl;

	//append()메소드
	//append()메소드는 하나의 문자열의 끝에 다른 문자열을 추가하는 메소드
	string str10, str11, str12;
	str10.append("Hello World\n"); //추가할 문자열을 맨 끝에 추가
	str11.append("Hello World\n",2,5); //추가할 문자열의 시작위치부터 개수만큼 추가
	str12.append(4, 'X'); //추가할 문자를 개수만큼 맨 끝에 추가

	cout << str10 << endl;
	cout << str11 << endl;
	cout << str12 << endl;

	//find()메소드
	//find()메소드는 특정 문자열을 찾아, 그 시작 위치로 반환
	string str13 = "Hello World";
	cout << str13.find("Hel") << endl;;
	cout << str13.find("o") << endl;
	cout << str13.find("o",3) << endl;

	return 0;
}