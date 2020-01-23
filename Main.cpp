#include "ArrayReview.h"

int main() {
	int oneD[COLS];
	int twoD[ROWS][COLS];
	
	srand(time(0));
	
	fillArray(oneD, COLS);
	printArray(oneD, COLS);
	cout << endl;
	fillArray(twoD, ROWS, COLS);
	printArray(twoD, ROWS, COLS);
	return 0;
}


