#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] )
{
	int n = atoi(argv[1]);
	char onestar[1] = "*";
	char stars[10] = "*";
	
	for (int i=0; i<n; i++){
		printf("First!\n");
		printf("%s\n",stars);
		strcat(stars,onestar);
		printf("%s\n",stars);
		printf("%s\n",onestar);
	}	
	return 0;

}
