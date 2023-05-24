#include "main.h"


void prompt(void)
{
	char *command = NULL;
	size_t size_command = 0;
	int n_char = 0;
	while (1)
	{
		write(1, "$", 2);
		n_char = getline(&command, &size_command, stdin);
		if (n_char == EOF)
			perror("getline problem");
		command[n_char - 1] = '\0';
		if (strcmp(command, "exit") == 0)
		{
			break;
		}
		else
		{
			system(command);
		}
	}
	free(command);
}
