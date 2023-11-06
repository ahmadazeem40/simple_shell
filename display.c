#include "my_shell.h"

int my_strlen(const char *str)
{
	int i = 0;

	while (*str)
		i++, str++;
	return (i);
}
void my_print(const char *str)
{
	write(STDOUT_FILENO, str, my_strlen(str));  
}

void my_display(void)
{
	my_print("Ranx_shell$ ");
}