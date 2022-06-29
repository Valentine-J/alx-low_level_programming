#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success), 1 (failure)
 */

int main(int argc, char *argv[])
{

int i;
int j;
int sum = 0;

count = 1;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0', j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}

}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
