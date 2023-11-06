#include "my_shell.h"

void my_read(char *buff, size_t len, ssize_t input)
{
	input = getline(&buff, &len, stdin);

	if (input == -1)
	{
		my_print("\n");
		exit(0);
        }
	
}

