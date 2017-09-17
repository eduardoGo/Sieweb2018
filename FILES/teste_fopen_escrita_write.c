#include <stdio.h>

int main(int argc, char const *argv[])
{
	char url[] = "0_teste.txt";
	char stream[256];
	FILE * file = fopen(url, "w");

	if (file != NULL)
	{
	
		printf("Digite a string: ");
		gets(stream);

		fprintf(file, stream);
		printf("Escrita realizada com sucesso!!\n");
	}
	else
	{
		printf("Erro\n");
	}

	fclose(file);
	return 0;
}