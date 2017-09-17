#include <stdio.h>

int main(int argc, char const *argv[])
{
	char url[] = "1_teste.bin";
	int stream[] = {10, 9, 8, 7 , 6, 5, 4, 3, 2, 1};
	FILE * file = fopen(url, "ab");

	if (file != NULL)
	{
		fwrite(stream, sizeof(int), 10, file);
		printf("Escrita realizada com sucesso!!\n");
	}
	else
	{
		printf("Erro\n");
	}

	fclose(file);
	return 0;
}