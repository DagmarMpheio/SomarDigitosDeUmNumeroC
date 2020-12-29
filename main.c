#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,soma=0;
    printf("Digite um numero para somar os seu digitos!\n");
    scanf("%d",&n);
    while(n>0){
       soma+=n%10;
       n/=10;
    }
    printf("%d",soma);
    return 0;
}
