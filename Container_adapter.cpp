#include<iostream>
#include<stack>
#include<deque>
#include<queue>
using namespace std;
//컨테이너 어댑터
//컨테이너 어탭터는 기존 컨테이너의 인터페이스를 제한하여 만든 기능이 제한되거나 변형된 컨테이너
//컨테이너 어탭터는 각각의 기초가 되는 클래스의 인터페이스를 제한하여, 특정 형태의 동작만을 수행

//컨테이너 어댑터의 종류
//1.stack
//2.queue
//3.priority_queue


int main() {

	//스택(stack)
	//스택 컨테이너는 vector 클래스의 인터페이스를 제한하여, 전형적인 스택 메모리 구조의 인터페이스
	//empty() : 스택이 비어 있으면 true를, 비어 있지 않으면 false를 반환
	//size() : 스택 요소의 총 개수를 반환함
	//top() : 스택의 제일 상단에 있는 요소에 대한 참조를 반환
	//push() : 스택의 제일 상단에 요소를 삽입함.
	//pop() : 스택의 제일 상단에 있는 요소를 삭제함.
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

	//큐(queue)
	//큐 컨테이너는 deque 클래의 인터페이스를 제한하여,전형적인 큐 메모리 구조의 인터페이스 제공
	//empty():큐가 비어 있으면 true를, 비어 있지 않으면 false를 반환함.
	//size():큐 요소의 총 개수를 반환함.
	//front():큐의 맨 앞에 있는요소에 대한 참조를 반환함.
	//back():큐의 맨 뒤에 있는 요소에 대한 참조를 반환함.
	//push():큐의 맨 뒤에 요소를 삽입함.
	//pop()	:큐의 맨 앞의 요소를 삭제함.
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
	
	//우선순위 큐(priority_queue)
	//우선순위 큐 컨테이너는 큐와는 달리 큐의 맨 앞의 요소로 가장 먼저 저장도니 요소가 아닌,가장 큰 값을 지닌 요소가 위치
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