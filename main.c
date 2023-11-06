#include "my_shell.h"

int main(void)
{
	char *buff = NULL;
	size_t len = 0;
	ssize_t input = 0;
	while (1)
	{
		my_display();
		my_read(buff, len, input);
        }
	free(buff);
	return (0);
}
