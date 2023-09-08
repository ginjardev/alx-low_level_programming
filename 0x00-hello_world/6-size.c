/**
 * main - print size of types
 * Return: zero from main
 */
int main(void)
{
	char chr;
	int num;
	long int lng;
	long long int llng;
	float flt;

	printf("Size of a char: %c byte(s)\n", sizeof(chr));
	printf("Size of an int: %d byte(s)\n", sizeof(num));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lng));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(llng));
	printf("Size of a float: %f byte(s)\n", sizeof(flt));

	return (0);
}
