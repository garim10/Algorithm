// 참고: http://blog.naver.com/ndb796/221228004692
// C++ STL sort() 함수 다루기2
// 학생을 나타낼 수 있는 정보가 이름, 성적, 생년월일일 때, 학생을 성적 순서대로 나열하고자 한다.
// 다만 성적이 동일한 경우, 나이가 더 어린 학생이 우선순위가 더 높다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first) { // 성적이 같다면 
		return a.second.second > b.second.second; // 나이가 더 어린 학생이 먼저 
	} else {
		return a.second.first > b.second.first; // 성적이 더 높은 학생이 먼저 
	}
}

int main(void) {
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("나동빈", make_pair(90, 19961222)));
	v.push_back(pair<string, pair<int, int> >("이태일", make_pair(97, 19930518)));
	v.push_back(pair<string, pair<int, int> >("박한울", make_pair(95, 19930203)));
	v.push_back(pair<string, pair<int, int> >("이상욱", make_pair(90, 19921207)));
	v.push_back(pair<string, pair<int, int> >("강종구", make_pair(88, 19900302)));
	
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
	
	return 0;
}
