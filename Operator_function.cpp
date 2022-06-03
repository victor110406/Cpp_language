#include<iostream>
using namespace std;

//C++에서는 연산자에 대해서 오버로딩을 제공
//함수 오버로딩이란 같은 일을 처리하는 함수를 매개변수의 형식을 조금 달리하여, 하나의 이름으로 작성하게 해주는것이다.
//operator오버로딩할연산자(매개변수목록)

class Operator {
private:
	int x_;
	int y_;
public:
	Operator(int x, int y);
	void Display();
	friend Operator operator-(const Operator& op1, const Operator& op2);
};

int main() {

	Operator op1 = Operator(10, 20);
	Operator op2 = Operator(20, 30);
	Operator op3 = op1 - op2;
	return 0;
}

Operator::Operator(int x, int y) {
	x_ = x;
	y_ = y;
}

Operator operator-(const Operator& op1, const Operator& op2)
{
	return Operator(op1.x_ + op2.x_, op1.y_ + op2.y_);
}
