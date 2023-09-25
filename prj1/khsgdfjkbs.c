#include<stdio.h>


int main()
{
    int a,i, max;
    printf("nhap so N chia het cho 5 =");
    scanf("%d",&a);
    max =a;
    if( a%5 == 0)

    {
        for( i = 5 ; i <= max;  i +=5)
        {

            printf("day so chia het cho 5 tu 5 den n la %d\n",i);
        }
    }
    else
    {
        printf("ko thoa man dieu kien chia het cho 5");
    }

    return  0;

}


