#include<iostream>
#include<string>
#include<set>
#include<map>
using namespace std;
//연관 컨테이너는 키와 값처럼 관련있는 데이터를 하나의 쌍으로 저장하는 컨테이너이다.
//연관 컨테이너는 삽입되는 요소의 위치를 지정할 수 없다.
//연관 컨테이너는 보통 균형 잡힌 이진 탐색 틔나 해시 테이블을 이용하여 구현

//STL에서 연과 컨테이너로 클래스 템플릿 제공
//1.set
//2.multiset
//3.map
//4.mulitmap

//set과 multiset
//집합 컨테이너는 저장하는 데이터 그 자체를 키로 사용하는 가장 단순한 컨테이너이다.
//이 컨테이너는 벡터와 달리 오름차순으로 정렬된 위리에 요소를 삽입하므로 검색 속도가 매우 빠르다.

//map과 multimap
//맵 컨테이너는 키와 값의 쌍으로 데이터를 관리하는 진정한 컨테이너
//이 컨테이너는 집합 컨테이너와 마찬가지로 정렬된 위치에 요소를 삽입함므로 검색 속도가 매우 빠름


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
	mp.insert(pair<string, int>("국어", 80)); 
	mp["수학"] = 100;
	map<string, int>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}

	return 0;
}