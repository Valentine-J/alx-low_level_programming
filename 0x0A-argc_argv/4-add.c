#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Print the positive numbers, followed by a new line
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success), 1 (failure)
 */

int main(int argc, char *argv[])
{

int i;
int j;
int sum = 0;

if (argc == 1)
{
printf("%d\n", argc - 1);
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0', j++)
if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
{
printf("Error\n");
return (1);
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
