#include <stdio.h>

int main(int argc, char const *argv[])
{
	char url[] = "1_teste.bin";
	int stream[] = {1, 2, 3, 4, 5 , 6, 7, 8, 9 , 11};
	FILE * file = fopen(url, "wb");

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