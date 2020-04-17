#include "shell.h"
/**
*_split_string - split the text string
*@line: text read.
*return: the  split text.
*/
char **_split_string(char *line)
{
	int i;
	char *piece;
	char **pieces = malloc(sizeof(char) * 1024);

	piece = strtok(line, " \n");
	i = 0;
	while (piece != NULL)
	{
		pieces[i] = piece;
		piece = strtok(NULL, " \n");
		i++;

	}
	pieces[i] = NULL;
	return (pieces);

}
