#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

void main()
{
	int i, j, temp, swa = 1, a[SIZE] = { 9,6,7,2,4,3,8,10,1,5 };

	for (i = 0; i < SIZE - 1; i++){

		swa = 0;

		for (j = 0; j < SIZE - i - 1; j++){

			if (a[j] > a[j + 1]){

				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				swa = 1;

			}
		}

		if (swa == 0){

			j = SIZE - 1;

		}
		else{

			printf("Loop %d :", i + 1);

			for (j = 0; j < SIZE; j++) {

				printf("%3d", a[j]);

			}
				
			printf("\n");

		}
	}

	system("pause");
	return 0;
}