#include <stdio.h>

int main()
{
	char c, url[] = "teste.txt";
	FILE * file = fopen(url, "a");
	if (file != NULL)
		printf("Arquivo criado com sucesso!!\n");
	else
		printf("Ops..\n");
	fclose(file);
	return 0;
}