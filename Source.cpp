#include <stdio.h>
#include <string.h>
int main()
{
	char x[100000];
	scanf_s("%s", x, sizeof(x));
	printf("%s", _strrev(x));
	return 0;
}