#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n, k, ans;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d", &k);
		for (int i = 0; i < k; ++i)
		{
			/* code */
			scanf("%d", &ans);
			if(ans==1)
				printf("Rolien\n");
			if(ans==2)
				printf("Naej\n");
			if(ans==3)
				printf("Elehcim\n");
			if(ans==4)
				printf("Odranoel\n");
		}
	}
	return 0;
}
