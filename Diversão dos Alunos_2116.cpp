#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

using namespace std;

bool primo(int n)
{
	for (int i = 2; i <=(int) sqrt(n); ++i)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = n; i > 1; --i)
	{
		if(primo(i)==true)
		{
			n=i;
			break;
		}
	}
	for (int i = m; i > 1; --i)
	{
		if(primo(i)==true)
		{
			m=i;
			break;
		}
	}
	printf("%d\n", n*m);
	return 0;
}
