void print_alphabet();
void _putchar();


void print_alphabet()
{
	char a = 'a';
	
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}

void _putchar()
{
	char a[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;
	
	while (a[i])
	{
		putchar(a[i]);
		i++;
	}
}

