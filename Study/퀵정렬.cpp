// 참고: https://blog.naver.com/ndb796/221226813382 

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
	
	// 왼쪽 -> 오른쪽(키 값보다 큰 값 찾기) 
	while(i <= end && data[key] >= data[i]) { // 키 값보다 큰 값을 찾을 때까지 
		i++;
	}
	// 오른쪽 -> 왼쪽(키 값보다 작은 값 찾기) 
	while(j > start && data[key] <= data[j]) { // 키 값보다 작은 값을 찾을 때까지 
		j--;
	}
	
	if(i > j) {	// 엇갈린 상태면 key 값과 j 값(key 값보다 작은 값) 교환 
		temp = data[key];
		data[key] = data[j];
		data[j] = temp;
	} else { // 엇갈리지 않은 상태면 i 값(key 값 보다 큰 값)과 j 값(key 값보다 작은 값) 교환 
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
