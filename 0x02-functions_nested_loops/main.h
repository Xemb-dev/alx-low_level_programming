void _putchar();


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
