#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *arq;
	if(argc == 3)
	{
		if(argv[1] == 'c')
		{
			arq = fopen(argv[2],"rb");
			compress();
		}
		else if(argv[1] == 'd')
		{
			arq = fopen(argv[2],"rb");
			descompress();
		}
	}
	else
	{
		printf("Argumentos inválidos, ultilize o formato < c > < file >");
		return 0;
	}
	return 0;
}
