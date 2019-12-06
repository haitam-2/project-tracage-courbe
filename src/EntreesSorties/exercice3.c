#include <stdio.h>
int main()
{
	char c;
	scanf ("%c", &c );
	if (48>=c && c<=57)
	{
		printf("il s'agit d'une minuscule");
	}
	if (97 >=c && c<=122)
	{
		printf("il s'agit d'une majuscule");
	}
	else
	{
		printf ("il s'agit d'un entier");
	}
	return 0;
}