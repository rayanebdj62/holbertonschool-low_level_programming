.C
#include <stdio.h>
/**
 *main - A program that prints the size of various comp .
uter types
 *return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long nt d;
	float f ;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
