#include<iostream>
#include<string>

using namespace std;

int main() {

	string str; //���ڿ��� ����
	str = "Hello World"; //���ڿ� �ʱ�ȭ
	string str1 = "Hong"; // ���ڿ� ����,�ʱ�ȭ
	//����ڰ� ���̸� ������� �ʾƵ� �Ǹ�, ���ڿ��� ���̿� ���� ������ �ڵ����� ó�����ش�.

	//���ڿ� ó��
	string str3 = "Hello World";
	string str4;
	str4 = str3;
	cout << str4 << endl;
	//string ��ü�� �̿��� ���ڿ������� ���� ������(=)���� ������ ���� �۾��� �� �� �ִ�.

	string str5 = "Hello ";
	string str6 = "World";
	string str7;
	str7 = str5 + str6;
	cout << str7 << endl;
	//string ��ü�� �̿��Ͽ� ���� ���� �����ڳ� append()�޼ҵ带 �̿��Ͽ� �ս��� �߰��� ���հ���

	//length()�޼ҵ�� size()�޼ҵ�
	//length()�޼ҵ�� ���ڿ��� ���̸� ��ȯ�Ѵ� �޼ҵ�
	//size()�޼ҵ�� ��ü�� �޸𸮿��� ���� ����ϰ� �ִ� ũ��
	string str8 = "Hello";
	string str9 = "World";
	cout << "str8�� ���ڿ� ����:" << str8.length() << endl;
	cout << "str9�� �޸� ��� ũ��:" << str9.size() << endl;

	//append()�޼ҵ�
	//append()�޼ҵ�� �ϳ��� ���ڿ��� ���� �ٸ� ���ڿ��� �߰��ϴ� �޼ҵ�
	string str10, str11, str12;
	str10.append("Hello World\n"); //�߰��� ���ڿ��� �� ���� �߰�
	str11.append("Hello World\n",2,5); //�߰��� ���ڿ��� ������ġ���� ������ŭ �߰�
	str12.append(4, 'X'); //�߰��� ���ڸ� ������ŭ �� ���� �߰�

	cout << str10 << endl;
	cout << str11 << endl;
	cout << str12 << endl;

	//find()�޼ҵ�
	//find()�޼ҵ�� Ư�� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ
	string str13 = "Hello World";
	cout << str13.find("Hel") << endl;;
	cout << str13.find("o") << endl;
	cout << str13.find("o",3) << endl;

	return 0;
}