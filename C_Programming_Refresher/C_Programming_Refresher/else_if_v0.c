#include <stdio.h>

int main() {
	int mark;

	printf("Enter your mark (0-100) ");
	scanf_s("%d", &mark);

	if (mark >= 90) {
		printf("Grade: A\n");
	}
	else if (mark >= 80) {
		printf("Grade: B\n");
	}
	else if (mark >= 70) {
		printf("Grade: B\n");
	}
	else if (mark >= 60) {
		printf("Grade: D\n");
	}	
	else {
		printf("Grade: F\n");
	}

	return 0;
	
}