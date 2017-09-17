#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char url[] = "1_teste.bin";
	FILE * file = fopen(url, "rb");
	int a[10];

	if (file != NULL)
	{
		fread(a, sizeof(int), 10, file);
		printf("Eu lí! :)\n\n");
		int i;
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", a[i]);
		}

		fread(a, sizeof(int), 10, file);
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", a[i]);
		}
	}
	else printf("erro!\n");
	fclose(file);
	return 0;
}