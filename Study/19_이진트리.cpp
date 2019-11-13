// ����: http://blog.naver.com/ndb796/221233560789
// ���� Ʈ���� ������ ��ȸ(Traversal) ���

#include <iostream>

using namespace std;

int number = 15;

// �ϳ��� ��� ������ �����մϴ�.
// ����ü�� �����ͷ� ����ϱ� ���ؼ� typedef�� �̿��ؼ� ������ �̸� ������. 
typedef struct node *treePointer;
typedef struct node {
	int data;
	treePointer leftChild, rightChild;
} node;

// ���� ��ȸ�� �����մϴ�.
void preorder(treePointer ptr) {
	// �ش� �����Ͱ� null ���� �ƴ϶�� 
	if(ptr) {
		cout << ptr->data << ' '; // �ڱ� ������ ���� ��� 
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

// ���� ��ȸ�� �����մϴ�.
void inorder(treePointer ptr) {
	if(ptr) {
		inorder(ptr->leftChild);
		cout << ptr->data << ' ';
		inorder(ptr->rightChild);		
	}

}

// ���� ��ȸ�� �����մϴ�.
void postorder(treePointer ptr) {
	if(ptr) {
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		cout << ptr->data << ' ';
	}

}

int main(void) {
	node nodes[number + 1]; // 15���� �����Ͱ� ��� �� �ִ� �迭 ���� 
	for(int i = 1; i <= number; i++) {
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}
	for(int i = 1; i <= number; i++) {
		if(i % 2 == 0) {
			nodes[i / 2].leftChild = &nodes[i]; // &nodes[i] => �ڱ� �ڽ�
		} else {
			nodes[i / 2].rightChild = &nodes[i];
		}
	}
	
	cout << "���� ��ȸ: ";
	postorder(&nodes[1]);
	cout << "\n";
	
	cout << "���� ��ȸ: ";
	inorder(&nodes[1]);
	cout << "\n";
	
	cout << "���� ��ȸ: ";
	postorder(&nodes[1]);
	cout << "\n";
	
	return 0;
}
