
int main1(void)
{
	void **test;
	int num0;
	int num1;
	int num2;
	int num3;
	char cha0;
	char cha1;
	char cha2;
	char cha3;

	num0 = 3;
	num1 = 1;
	num2 = 4;
	num3 = 1;

	cha0 = 'a';
	cha1 = 'b';
	cha2 = 'c';
	cha3 = 'd';

	test = malloc(5 * sizeof(void*));

	test[0] = &cha0;
	test[1] = &cha1;
	test[2] = &cha2;
	test[3] = &cha3;
	test[4] = NULL;

	printf("%c\n", *((char *)test[0]));

	free(test);

	return 0;
}
