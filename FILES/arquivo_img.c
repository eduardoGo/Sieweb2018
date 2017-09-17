#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char url[] = "2_img.png";
	FILE * file = fopen(url, "rb");
	char a[3];
	
	if (file != NULL)
	{
		fread(a, sizeof(char), 3, file);
		int i;
		//for (i = 0; i < 10; i++)
		{
			printf("%s\n", a);
		}
	}
	else printf("erro!\n");
	fclose(file);
	return 0;
}