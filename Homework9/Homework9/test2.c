#include <stdio.h>
#include <stdlib.h>

int test2() {
	
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++) {
		if ((killer != 'A') + (killer == 'C') 
			+ (killer == 'D') + (killer != 'D') == 3) {
			printf("Ð×ÊÖÊÇ:%c\n", killer);
		}
	}

	system("pause");
	return 0;
}