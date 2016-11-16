#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

bool map(char s[], int tam)
{
	char g[52];
	int j = 0;
	int i, k;
	for (i = 0; i < tam; ++i)
	{
		/* code */
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			g[j] = s[i];
			j++;
		}
	}
	g[j] = '\0';
	for (i = 0, k = strlen(g)-1 ; i < strlen(g) && k >= 0; ++i, --k)
	{
		/* code */
		if(g[i]!=g[k])
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	/* code */
	char g[52];
	fflush(stdin);
	gets(g);
	if(map(g, strlen(g))==true)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
