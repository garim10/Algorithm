// 참고: http://blog.naver.com/ndb796/221227975229
// C++ STL sort() 함수 다루기

#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	
	// 정렬 기준은 '점수가 낮은 순서'
	bool operator <(Student &student) { // 다른 학생과 비교했을 때 
		return this->score < student.score; // 내 점수가 낮다면 우선 순위가 높다 
	}
};

int main(void) {
	Student students[] = {
		Student("나동빈", 90),
		Student("이상욱", 93),
		Student("박한울", 97),
		Student("강종구", 87),
		Student("이태일", 92)
	};
	
	sort(students, students + 5);
	for(int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}
}
