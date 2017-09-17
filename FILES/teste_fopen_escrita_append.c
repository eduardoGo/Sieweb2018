#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char url[] = "0_teste.txt";
	char stream[256];
	FILE * file = fopen(url, "a");

	if (file != NULL)
	{
	
		printf("Digite a string: ");
		gets(stream);
		char a[] = " ";
		strcat(a,stream);
		fprintf(file, a);
		printf("Escrita realizada com sucesso!!\n");
	}
	else
	{
		printf("Erro\n");
	}

	fclose(file);
	return 0;
}