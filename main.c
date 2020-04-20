#include "shell.h"
/**
 * main - menu
 * Return: void
 */
int main(void)
{

	char *line;
	size_t len = 0;
	char **arguments;
	

	printf("#cisfun$ ");

	while (getline(&line, &len, stdin) != -1)
	{
		arguments = _split_string(line);
		
			
		_exec(arguments);
		printf("#cisfun$ ");
	}
	return (0);
}

int _strcmp(char *s1)
{

int j;
char *r1;
char *r2= "exit";
r1 = s1;


while (*r1 != '\0' && *r2 != '\0' && *r1 == *r2)
{
r1++;
r2++;
}
j = *r1 - *r2;
return (j);
}

