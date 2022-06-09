#include<iostream>
#include<stack>
#include<deque>
#include<queue>
using namespace std;
//�����̳� �����
//�����̳� �����ʹ� ���� �����̳��� �������̽��� �����Ͽ� ���� ����� ���ѵǰų� ������ �����̳�
//�����̳� �����ʹ� ������ ���ʰ� �Ǵ� Ŭ������ �������̽��� �����Ͽ�, Ư�� ������ ���۸��� ����

//�����̳� ������� ����
//1.stack
//2.queue
//3.priority_queue


int main() {

	//����(stack)
	//���� �����̳ʴ� vector Ŭ������ �������̽��� �����Ͽ�, �������� ���� �޸� ������ �������̽�
	//empty() : ������ ��� ������ true��, ��� ���� ������ false�� ��ȯ
	//size() : ���� ����� �� ������ ��ȯ��
	//top() : ������ ���� ��ܿ� �ִ� ��ҿ� ���� ������ ��ȯ
	//push() : ������ ���� ��ܿ� ��Ҹ� ������.
	//pop() : ������ ���� ��ܿ� �ִ� ��Ҹ� ������.
	int decimal = 213;
	stack<int> st;

	do {
		st.push(decimal % 2);
		decimal /= 2;
	} while (decimal);

	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}
	cout << endl;

	//ť(queue)
	//ť �����̳ʴ� deque Ŭ���� �������̽��� �����Ͽ�,�������� ť �޸� ������ �������̽� ����
	//empty():ť�� ��� ������ true��, ��� ���� ������ false�� ��ȯ��.
	//size():ť ����� �� ������ ��ȯ��.
	//front():ť�� �� �տ� �ִ¿�ҿ� ���� ������ ��ȯ��.
	//back():ť�� �� �ڿ� �ִ� ��ҿ� ���� ������ ��ȯ��.
	//push():ť�� �� �ڿ� ��Ҹ� ������.
	//pop()	:ť�� �� ���� ��Ҹ� ������.
	int n = 20;
	queue<int> qu;
	qu.push(0);
	qu.push(1);

	for (int i = 2; i < n; i++)
	{
		int temp = qu.front();
		cout << temp << " ";
		qu.pop();
		qu.push(temp + qu.front());
	}
	cout << endl;
	
	//�켱���� ť(priority_queue)
	//�켱���� ť �����̳ʴ� ť�ʹ� �޸� ť�� �� ���� ��ҷ� ���� ���� ���嵵�� ��Ұ� �ƴ�,���� ū ���� ���� ��Ұ� ��ġ
	priority_queue<int> pq;
	pq.push(10);
	pq.push(20);
	pq.push(100);
	pq.push(3);
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	return 0;
}