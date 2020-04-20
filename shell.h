#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

int _exec(char **token);
void handler(int num);
char **strtok_(char *line);
char **_split_string(char *line);
int _strcmp(char *s1);
char *_strncat(char *dest, char *src, int n);
char *_strdup(char *str);
char *_strstr(char *haystack, char *needle);
#endif
