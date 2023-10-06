include <stdio.h>
/**
 * main - this is function that prints the size of various types computers
 * Return: 0
 */
int main(void)
{
	char a = sizeof(char);
	an int b =sizeof(an int);
	long int c =sizeof(long int);
	long long int d =sizeof(long long int);
	float e =sizeof(float);
	printf("Size of a char: %d byte(s)\n",a);
	printf("Size of an int: %d byte(s)\n",b);
	printf("Size of long int: %d byte(s)\n",c);
	printf("Size of long long int: %d byte(s)\n",d);
	printf("Size of an float: %d byte(s)\n",e);
 return 0;

}
