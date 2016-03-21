#include <stdio.h>

int main (int argc, char **argv)
{
	if ( argc == 1)
	{
		printf("\nHello, World!\n\n");
	}
	else
	{
		if ( argc == 2 )
		{
			printf("\nHello, %s\n\n", argv[1]);
		}
		else
		{
			printf("\nusage: ./hello <name>\n <name> is an optional parameter\n\n");
		}
	}
	return 0;
}