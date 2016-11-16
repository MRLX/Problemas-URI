#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

string alfabeto = "abcdefghijlmnopqrstuvykwxz";
char s[1010];

int map(char s[], int tam)
{
	int count = 0;
	for (int i = 0; i < 26; ++i)
	{
		for (int j = 0; j < tam; ++j)
		{
			if(alfabeto[i]==s[j])
			{
				count++;
				i++;
				j = 0;
			}
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int n;
	int x, y;
	scanf("%d", &n);
	cin.ignore();
	while(n!=0)
	{
		cin.getline(s, 1010);
		x = map(s, strlen(s));
		if(x==26)
			printf("frase completa\n");
		else if(x>=13 && x<26)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");
		--n;
	}
	return 0;
}
