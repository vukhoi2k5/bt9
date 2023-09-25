#include"stdio.h"

int main()
{
    int i,j,k;
    printf("nhap =");
    scanf("%d",&i);



    for(j=i;j>=1 ;j--)
    {

        for(k=1;k<=j;k++)
        {
            printf("*");

        }

        printf("\n");

    }



}