#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    int soma;
    scanf("%d", &t);
    while(t != 0 )
    {
        soma = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            if(i%2!=0)
                soma = soma - 1;
            else
                soma = soma + 1;
        }
        printf("%d\n", soma);
        --t;
    }
    return 0;
}
