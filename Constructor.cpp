#include <iostream>
#include <string>
using namespace std;

//������
//Ŭ������ ������ ��ü�� �����ϸ�, �ش� ��ü�� �޸𸮿� ��� ����
//��� ��� ������ �ʱ�ȭ�ϱ� ������ ���Ұ�
//��ü�� ��� ������ private ����� �������� �Ϲ����� �ʱ�ȭ ������� �ʱ�ȭ �� �� ����.
class Student {
private:
	int rank;
public:
	Student(const string& name,int avg);
	string name;
	int avg;
	void set_rank(int avg);

};

int main() {
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
