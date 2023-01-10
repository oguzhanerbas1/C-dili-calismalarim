#include <stdio.h>
#include <stdbool.h>

void lolol(int []);

int main(){
    
    int dizi[10],temp[10]={0},i,j;

    for ( int i = 0; i < 10; i++)
    {
        printf("Dizinin elemanlarini giriniz:\n");
        scanf("%d",&dizi[i]);
    }


    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (dizi[i] == dizi[j])
            {
                temp[i]++; 
            }
            
        }
        
    }
    
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",temp[i]);
    }
    

    return 0;
}

void lolol(int a[])
{
    
}