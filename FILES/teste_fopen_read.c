#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c, url[] = "0_teste.txt";
	FILE * file = fopen(url, "r");
	if (file != NULL)
		while ( (c = fgetc(file)) != EOF)
		{
			printf("%c", c);
		}
	else printf("Erro!\n");
	fclose(file);
	return 0;
}