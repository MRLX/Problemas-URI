#include <iostream>
#include <string.h>
#include<stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int t;
	char s[1001];
	scanf("%d", &t);
	cin.getline(s, 0);
	for (int i = 0; i < t; ++i)
	{
		/* code */
		fflush(stdin);
		cin.getline(s, 1001);
		if(strlen(s)<=3)
		{
			if(s[0]== 'o' && s[1]=='n' || s[0]=='o' && s[2]=='e' || s[1]=='n' && s[2]=='e')
				printf("1\n");
			else
				printf("2\n");
		}
		else
			printf("3\n");

	}
	return 0;
}
