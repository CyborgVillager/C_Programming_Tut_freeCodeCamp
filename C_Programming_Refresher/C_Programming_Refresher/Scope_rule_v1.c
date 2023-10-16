#include <stdio.h>

int main() {
	int var = 34;  //availb as a LOCAL to main() function

	{
		int var = 4;
		printf("%d\n", var);
	}

	printf("%d", var);
	return 0;
}

