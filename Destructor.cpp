#include <iostream>
#include <string>
using namespace std;

//�Ҹ���
//��ü�� ������ ������ �������� �ݴ� ������ ������ ��� �Լ��� �ʿ�������. �̷��� ������ �ϴ� ��� �Լ��� �Ҹ��ڶ�� �Ѵ�.
//�Ҹ��ڴ� ��ü�� ������ ������ �����̷��� ���� �ڵ����� ȣ��Ǹ�, ����� ���� ��ü�� ������ �ش�.
//Ŭ���� �Ҹ����� �̸��� �ش� Ŭ������ �̸��� ������, �̸� �տ� ���� ǥ�ø� �ٿ� �����ڿ� ����
// ~Student();

//�Ҹ����� Ư¡
//1.�Ҹ��ڴ� �μ��� ������ �ʴ´�.
//2.�Ҹ��ڴ� ��ȯ���� ������ void������ �������� �ʴ´�.
//3.��ü�� ���� ���� �����ڸ� ���� �� ������, �Ҹ��ڴ� �� �ϳ��� ���� �� �ֵ�.

//������ ����: �ش� ���Ϸ��� ����� ��
//���� ����: �ش� ��ü�� ���ǵ� ����� ��� ��
//��:delete�� ����Ͽ� �ش� ��ü�� �޸𸮸� ��ȯ�� ��
//�ӽ� ��ü: �ӽ� ��ü�� ����� ������ ��

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
	Student my_student("ȫ����", 95);
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
