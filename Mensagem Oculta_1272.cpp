#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>

using namespace std;


void map(char s[], int n)
{
	char wa[51];
	int j = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(i==0 && s[i]!=' ')
		{
			wa[j] = s[i];
			j++;
		}
		else if(s[i]==' ' && s[i+1] != ' ')
		{
			wa[j] = s[i+1];
			j++;
		}
	}
	wa[j]='\0';
	printf("%s\n", wa);
}

int main(int argc, char const *argv[])
{
	/* code */
	char s[51];
	int t;
	scanf("%d", &t);
	cin.getline(s, 0);
	for (int i = 0; i < t; ++i)
	{
		/* code */
		fflush(stdin);
		cin.getline(s, 51);
		map(s, strlen(s));
	}
	return 0;
}
