#include<iostream>
#include<string>
using namespace std;

//C++ ���ڿ�
//1.c��� ��Ÿ�� ���ڿ�
//2.string Ŭ������ �̿��� ���ڿ�

//NULL ����
//C++������ ������ �迭�� ����� ���ڿ� ������ ���ڿ��� ���� ���α׷����� ���� �˷��־�� �Ѵ� �׷��� ���� ���ڿ��� ���� ���� �� ���� �����Ⱚ�� ���а���


int main() {

	char name[20];
	char subject[20];

	//����
	//1.���Ⱑ ���� 2���� �Է��� �� ����.
	//2.20����Ʈ �̻��� �̸��� ���� ���α׷��� ����ȴ�.
	/*
	cout << "�̸��� �Է��ϼ���:";
	cin >> name;
	cout << "������ �Է��ϼ���:";
	cin >> subject;
	cout << "�̸�: " << name << " ����: " << subject << endl;
	*/


	cout << "�̸��� �Է��ϼ���:";
	cin.get(name, 20).get();
	cout << "������ �Է��ϼ���:";
	cin.get(subject, 20).get();
	cout << "�̸�: " << name << " ����: " << subject << endl;
	//cin ��ü�� ���⸦ ������ �� ����, ĳ���� ���� ���ڵ��� ��� ���ڿ��� ������ �ν�
	//���⸦ ������ ���ڿ��� ���� �Է¹������� cin��ü�� get()�޼ҵ带 ���

	cout << "�̸��� �Է��ϼ���: ";
	cin.get(name, 20).ignore(20, '\n');
	cout << "������ �Է��ϼ���: ";
	cin.get(subject, 20).ignore(20, '\n');
	cout << "�̸�: " << name << " ����: " << subject << endl;
	//ignore()�޼ҵ�� 20����Ʈ�� �Ѿ�� �Է��̵Ǹ� ��Ȯ�� 20����Ʈ������ �Է��� �޴´�.

	//string�� �̿��ϸ� �����ϰ� ������ �ذᰡ��
	string name1, subject1;
	cout << "�̸��� �Է��ϼ���:";
	getline(cin, name1);
	cout << "������ �Է��ϼ���:";
	getline(cin, subject1);
	cout << "�̸�: " << name1 << " ����: " << subject1 << endl;

	return 0;
}