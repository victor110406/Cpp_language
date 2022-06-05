#include<iostream>
#include<iterator>
#include<vector>
#include<deque>
#include<list>
using namespace std;
//시퀀스 컨테이너
//시퀀스 컨테이너는 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 가장 일반적인 컨테이너이다.
//시퀀스 컨테이너는 삽입된 요소를 순석

//1.모든 요소가 직선 순서대로 배치되어야 한다.
//2.반복자가 최소한 순방향 반복자이상이여야한다.
//3.시퀀스 컨테이너의 요소들은 명확한 순서를 가지므로, 특정 위치를 참조하는 연산이 가능

//시퀀스 컨테이너의 종류
//1.vector
//2.deque
//3.list
//4.forward_list

int main() {

	// 벡터(vector)
	// 벡터켄테니어는 동적 배열의 클래스 테플릿 표현이라고 할 수 이싸.
	// 벡터 객체는 요소가 추가되거나 삭제될 때마다 자동으로 메모리를 재할당하여 크기를 동적으로 변경
	// vector 헤더 파일에 정의되어 있으며, 임의 접근을 제공하는 가장 간단한 시퀸스 컨테이너
	vector<int>vec = { 10,20,30 }; // vector 객체의 선언 및 초기화
	cout << "vector의 현재 크기: " << vec.size() << endl;
	vec.push_back(40); //vector 요소의 추가
	cout << "vector의 현재 크기: " << vec.size() << endl;
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	//1. size() 함수 : 컨테이너에 저장된 요소의 개수를 반환함.
	//2. push_back() 함수 : 컨테이너의 마지막 요소로 해당 데이터를 추가함.
	//3. begin() 함수 : 컨테이너의 첫 번째 요소를 가리키는 반복자를 반환함.
	//4. end() 함수 : 컨테이너의 마지막 요소 바로 다음(past - the - end)을 가리키는 반복자를 반환함.

	//데큐(deque)
	//데큐 컨테이너는 양쪽에 끝이 있는 큐를 의미합니다.
	//이 컨테이너는 양 끝에서 빠르게 요소를 삽입하거나 삭제할 수 있따.
	deque<int> deq = { 20 };
	deq.push_back(30); //후방 삽입
	deq.push_front(10); //전방 삽입
	cout << "deque의 모든 요소: " << endl;
	copy(deq.begin(), deq.end(), ostream_iterator<int>(cout, " "));
	cout << "현재 데큐의 첫 번째 요소는: " << deq.front() << endl;
	//1.push_front()함수: 컨테이너의 첫 번째 요소로 해당 데이터 추가
	//2.front()함수:컨테이너 첫 번째 요소를 반환
	//3.pop_front()함수 :컨테이너 첫 번째 요소 삭제

	//리스트(list)
	//리스트 컨테이너는 이중 연결 리스트의 클래스 템플릿 표현이라 할 수 있다.
	//이 컨테이너는 컨테이너의  모든 요소에서 양방향 접근, 빠른 삽입과 삭제를 할 수 있지만 , 임의 접근을 할 수 없다.
	//swap()	두 요소의 위치를 서로 바꿈.
	//reverse()	리스트 전체의 요소의 위치를 역순으로 변경함.
	//sort()	리스트 전체의 요소를 정렬함.
	//unique()	같은 값이 인접해 있을 경우, 그 값들을 하나로 단일화함.
	//merge()	두 정렬된 리스트를 합병함.
	//splice()	두 리스트를 연결하거나, 한 쪽 리스트로 이동시킴.


	return 0;
}