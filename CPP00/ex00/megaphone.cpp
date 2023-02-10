#include <iostream>
using std::cout;

int main(int argc, char **argv) 
{
	if (argc > 1)
	{
		if (argc >= 3)
		{
			for (int x = 1; x < int (sizeof(argv)/2); x++)
				for (int i = 0; i < int (strlen(argv[x])); i++)
					putchar(toupper(argv[x][i]));
			putchar('\n');
		}
		else
		{
			for (int i = 0; i < int (strlen(argv[1])); i++)
				putchar(toupper(argv[1][i]));
			putchar('\n');
		}
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";	
	return 0;
}
