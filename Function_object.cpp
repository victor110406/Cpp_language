#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;
//1.�Լ� ������
//2.�Լ� ��ü
//3.���� ǥ����

//�Լ� ��ü�� ����
//1.�Լ� ��ü�� ���¸� ������ �� �ִ�.
//2.�Լ� ��ü�� Ÿ���̹Ƿ�, ���ø� �μ��� ����� �� �ִ�.

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

	vector<int> vc = { 20, 40, 10, 30 }; // vector ��ü�� ���� �� �ʱ�ȭ
	sort(vc.begin(), vc.end(), greater<int>());
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	sort(vc.begin(), vc.end(), less<int>());
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));

	return 0;
}