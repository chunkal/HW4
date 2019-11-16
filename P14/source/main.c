#include <stdio.h>
#include <stdlib.h>
#define STUDENT 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double average(const int setOfGrades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);

int main(void) {

	int student;
	const int studentGrades[STUDENT][EXAMS] = {
		{77,68,86,73},
		{96,87,89,78},
		{70,90,86,81} };

	printf("The array is : \n");
	printArray(studentGrades, STUDENT, EXAMS);

	printf("\n\nLowest grade : %d\nHighest grade : %d\n",
			minimum(studentGrades, STUDENT, EXAMS),
			maximum(studentGrades, STUDENT, EXAMS));

	for (student = 0; student < STUDENT; student++) {

		printf("The average grade for student %d is %.2f\n", student, average(studentGrades[student], EXAMS));
	
	}

	system("pause");
	return 0;
}

void printArray(const int grades[][EXAMS], int pupils, int tests) {

	printf("                 [0]  [1]  [2]  [3]");

	for (int i = 0; i < pupils; i++) {
		
		printf("\nstudentGrades[%d] ", i);

		for (int j = 0; j < tests; j++) {

			printf("%-5d", grades[i][j]);

		}
	}
}

int minimum(const int grades[][EXAMS], int pupils, int tests) {

	int LowGrade = 100;

	for (int i = 0; i < pupils; i++) {

		for (int j = 0; j < tests; j++) {

			if (grades[i][j] < LowGrade) {

				LowGrade = grades[i][j];
			}
		}
	}

	return LowGrade;

}

int maximum(const int grades[][EXAMS], int pupils, int tests) {

	int HighGrade = 0;

	for (int i = 0; i < pupils; i++) {

		for (int j = 0; j < tests; j++) {

			if (grades[i][j] > HighGrade) {

				HighGrade = grades[i][j];
			}
		}
	}

	return HighGrade;

}

double average(const int setOfGrade[], int tests) {

	int total = 0;

	for (int i = 0; i < tests; i++) {

		total += setOfGrade[i];
	}

	return (double)total / tests;

}
