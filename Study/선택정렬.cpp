#include <stdio.h>

// 선택 정렬 
// 가장 작은 값을 제일 앞으로 보내면 어떨까? 
int main(void) {
	int i, j, min, index, temp;
	int array[10] = {10, 2, 6, 1, 3, 9, 5, 8, 4, 7};
	for(i = 0; i < 10; i++) {
		min = 9999;
		for(j = i; j < 10; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
