#include <stdio.h>

int main(void) {
	int i, j, temp;
	int array[10] = {10, 2, 6, 1, 3, 9, 5, 8, 4, 7};
	for(i = 0; i < 10; i++) {
		for(j = 0; j < 9 - i; j++) {
			if(array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
} 
