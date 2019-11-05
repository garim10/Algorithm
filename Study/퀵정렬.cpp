// ����: https://blog.naver.com/ndb796/221226813382 

#include <stdio.h>

int number = 10;
int data[] = {10, 2, 4, 1, 5, 6, 8, 3, 7, 9};

void show() {
	int i;
	for(i = 0; i < number; i++) {
		printf("%d ", data[i]);
	} 
}

void quickSort(int *data, int start, int end) {
	if(start >= end) {
		return;
	}
	
	int key = start;
	int i = start + 1;
	int j = end;
	int temp;
	
	// ���� -> ������(Ű ������ ū �� ã��) 
	while(i <= end && data[key] >= data[i]) { // Ű ������ ū ���� ã�� ������ 
		i++;
	}
	// ������ -> ����(Ű ������ ���� �� ã��) 
	while(j > start && data[key] <= data[j]) { // Ű ������ ���� ���� ã�� ������ 
		j--;
	}
	
	if(i > j) {	// ������ ���¸� key ���� j ��(key ������ ���� ��) ��ȯ 
		temp = data[key];
		data[key] = data[j];
		data[j] = temp;
	} else { // �������� ���� ���¸� i ��(key �� ���� ū ��)�� j ��(key ������ ���� ��) ��ȯ 
		temp = data[i];
		data[i] = data[j];
		data[j] = temp;
	}
	
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main(void) {
	quickSort(data, 0, number - 1);
	show();
	return 0;
}
