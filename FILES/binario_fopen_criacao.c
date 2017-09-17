#include <stdio.h>

int main(int argc, char const *argv[])
{
	char url[] = "1_teste.bin";
	FILE * file = fopen(url, "ab");
	if (file != NULL)
		printf("Arquivo criado com sucesso!!\n");
	else
		printf("Ops..\n");
	fclose(file);
	return 0;
}