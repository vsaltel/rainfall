#include "stdio.h"

int main(int argc, char **argv, char **env)
{
	printf("%p %s\n", env[0] + 10, env[0] + 10);
	return (0);
}
