#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

using namespace std;


int main()
{
	string s;
	int i;
	bool p;
	while(getline(cin, s))
	{
		i = 0;
		p = true;
		while(i != s.size())
		{
			if(s[i] != ' ')
			{
				if(p == true)
					s[i] = toupper(s[i]);
				else
					s[i] = tolower(s[i]);
				if(p == true) p = false;
				else p = true;
			}
			i++;
		}
		cout<<s<<endl;
	}
	return 0;
}
