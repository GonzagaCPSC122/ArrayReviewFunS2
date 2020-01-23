#include "ArrayReview.h"

void fillArray(int arr[], int size) {
	int i = 0;
	
	do {
		// do-while loops test boolean condition (BC)
		// after executing body of loop first time
		// not the best fit for this task
		// because what if i >= 0 initially?
		// e.g. what if size is 0?
		arr[i] = rand() % 100 + 1;
		i++;
	} while (i < size);
}

void fillArray(int arr[][COLS], int rows, int cols) {
	int i = 0, j = 0;
	
	do {
		j = 0; // don't forget this!!
		do {
			arr[i][j] = rand() % 100 + 1;
			j++;
		} while (j < cols);
		i++;
	} while (i < rows);
}

void printArray(int arr[], int size) {
	int i;
	
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray(int arr[][COLS], int rows, int cols) {
	int i, j;
	
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
