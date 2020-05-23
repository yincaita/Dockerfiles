#include <stdlib.h>
#include <stdio.h>
 
int main() {

	FILE *in= fopen("helloworld.c", "r");
	char buf[1024];

	while (fgets(buf, sizeof(buf), in) != NULL) {
		printf("%s", buf);
	}

	fclose(in);

	printf(": \n: 2018051199");
	return 0;
}
