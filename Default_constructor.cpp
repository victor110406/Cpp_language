#include <iostream>
#include <string>
using namespace std;

//����Ʈ ������
//����Ʈ �����ڴ� ��ü�� ������ �� ����ڰ� �ʱ갪�� ������� ������, �����Ϸ��� �ڵ����� ����
//����Ʈ �����ڴ� ����ڷκ��� �μ��� ���޹��� �����Ƿ�, �Ű������� ������ �ʴ´�.
//�Ű������� ������ ������ ��κ��� ����Ʈ �����ڰ� 0�̳� NULL, �� ���ڿ� ������ �ʱ�ȭ

class Student {
private:
	int rank;
public:
	Student(const string& name_, int avg_ = 80);
	string name;
	int avg;
	void set_rank();
};

int main() {
	Student my_student("ȫ����");
	return 0;
}

Student::Student(const string& name_, int avg_) {
	name = name_;
	avg = avg_;
	set_rank();
}

void Student::set_rank() {
	rank = avg % 10;
}