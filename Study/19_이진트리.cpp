// 참고: http://blog.naver.com/ndb796/221233560789
// 이진 트리의 구현과 순회(Traversal) 방식

#include <iostream>

using namespace std;

int number = 15;

// 하나의 노드 정보를 선언합니다.
// 구조체를 포인터로 사용하기 위해서 typedef를 이용해서 포인터 이름 정해줌. 
typedef struct node *treePointer;
typedef struct node {
	int data;
	treePointer leftChild, rightChild;
} node;

// 전위 순회를 구현합니다.
void preorder(treePointer ptr) {
	// 해당 포인터가 null 값이 아니라면 
	if(ptr) {
		cout << ptr->data << ' '; // 자기 데이터 먼저 출력 
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

// 중위 순회를 구현합니다.
void inorder(treePointer ptr) {
	if(ptr) {
		inorder(ptr->leftChild);
		cout << ptr->data << ' ';
		inorder(ptr->rightChild);		
	}

}

// 후위 순회를 구현합니다.
void postorder(treePointer ptr) {
	if(ptr) {
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		cout << ptr->data << ' ';
	}

}

int main(void) {
	node nodes[number + 1]; // 15개의 데이터가 담길 수 있는 배열 생성 
	for(int i = 1; i <= number; i++) {
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}
	for(int i = 1; i <= number; i++) {
		if(i % 2 == 0) {
			nodes[i / 2].leftChild = &nodes[i]; // &nodes[i] => 자기 자신
		} else {
			nodes[i / 2].rightChild = &nodes[i];
		}
	}
	
	cout << "전위 순회: ";
	postorder(&nodes[1]);
	cout << "\n";
	
	cout << "중위 순회: ";
	inorder(&nodes[1]);
	cout << "\n";
	
	cout << "후위 순회: ";
	postorder(&nodes[1]);
	cout << "\n";
	
	return 0;
}
