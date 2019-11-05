#include <stdio.h>

//삽입 정렬 
//각 숫자를 적절한 위치에 삽입하면 어떨까? 
int main(void) {
	int i, j, temp;
	int array[10] = {10, 2, 6, 1, 3, 9, 5, 8, 4, 7};
	for(i = 0; i < 9; i++) { // i < 9인 이유: 밑에 array[j] > array[j + 1] 때문에 
		j = i;
		while(j >= 0 && array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	} 
	return 0;
}
