#include<iostream>
#include<string>
#include<set>
#include<map>
using namespace std;
//���� �����̳ʴ� Ű�� ��ó�� �����ִ� �����͸� �ϳ��� ������ �����ϴ� �����̳��̴�.
//���� �����̳ʴ� ���ԵǴ� ����� ��ġ�� ������ �� ����.
//���� �����̳ʴ� ���� ���� ���� ���� Ž�� Ʒ�� �ؽ� ���̺��� �̿��Ͽ� ����

//STL���� ���� �����̳ʷ� Ŭ���� ���ø� ����
//1.set
//2.multiset
//3.map
//4.mulitmap

//set�� multiset
//���� �����̳ʴ� �����ϴ� ������ �� ��ü�� Ű�� ����ϴ� ���� �ܼ��� �����̳��̴�.
//�� �����̳ʴ� ���Ϳ� �޸� ������������ ���ĵ� ������ ��Ҹ� �����ϹǷ� �˻� �ӵ��� �ſ� ������.

//map�� multimap
//�� �����̳ʴ� Ű�� ���� ������ �����͸� �����ϴ� ������ �����̳�
//�� �����̳ʴ� ���� �����̳ʿ� ���������� ���ĵ� ��ġ�� ��Ҹ� �����ԹǷ� �˻� �ӵ��� �ſ� ����


int main() {

	int arr[5] = { 10,20,30,40,50 };
	set<int> si(arr, arr + 3);
	copy(si.begin(), si.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	si.insert(60); 
	si.insert(70); 
	si.erase(20); 
	copy(si.begin(), si.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	map<string, int>mp;
	mp.insert(pair<string, int>("����", 80)); 
	mp["����"] = 100;
	map<string, int>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}

	return 0;
}