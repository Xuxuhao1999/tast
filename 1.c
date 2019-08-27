#include "stdio.h"
void main(int argc, char* argv[])
{
	int i = 0;
	printf("a=%d\n", argc);
	for (i = 0; i < argc; i++)
		printf("b[%d]=%s\n", i, argv[i]);
	getchar();
}