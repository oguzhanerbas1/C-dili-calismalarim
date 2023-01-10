#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,b;
    printf("Dizi kac elemanli olsun\n");
    scanf("%d",&n);

    int sayilar[n],ortak[n],temp[n]={0};
    
    for(i=0;i<n;i++)
    {
        printf("Dizinin %d.elemanini giriniz...\n",i+1);
        scanf("%d",&sayilar[i]);
    }
    for(i=0;i<n;i++)
    {   
        ortak[i]=0;

        for(b=0;b<n;b++)
        {
            if(sayilar[i]==sayilar[b])
            {
                ortak[i]+=1;

            }
        }
    }

    for ( i = 0; i < n; i++)
    {
        
    }
    

    for ( i = 0; i < n; i++)
    {
        printf("%d elamaninin dizi icerisinde tekrar sayisi=>%d\n",sayilar[i],ortak[i]);
    }
    

    return 0;
}
