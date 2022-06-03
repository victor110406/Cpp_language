#include<iostream>
using namespace std;

//C++������ �����ڿ� ���ؼ� �����ε��� ����
//�Լ� �����ε��̶� ���� ���� ó���ϴ� �Լ��� �Ű������� ������ ���� �޸��Ͽ�, �ϳ��� �̸����� �ۼ��ϰ� ���ִ°��̴�.
//operator�����ε��ҿ�����(�Ű��������)

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
	Operator op2 = op1 - op2;
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