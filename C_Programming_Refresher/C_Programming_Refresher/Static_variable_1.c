#include <stdio.h>

int age_function() {
	static int age_num = 0;	
	int num_default = 25;
	age_num++;
	if (age_num > num_default)
		return age_num;
	else
		return num_default;
}

int main() {
	printf("%d", age_function());

	return 0;
}