#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAX 100000


using namespace std;

int main(int argc, char const *argv[])
{
	long long int n, y;
	long long int x;
	char s[MAX];
	while(scanf("%lld %lld", &n, &y))
	{
		if(n==0 && y==0)
			return 0;
		x = n+y;
		sprintf(s, "%lld", x);
		for (int i = 0; i < strlen(s); ++i)
		{
			if(s[i]!='0')
				printf("%c", s[i]);
		}
		printf("\n");
	}
	return 0;
}
