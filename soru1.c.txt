#include <stdio.h>
#include <stdbool.h>

int main(){
    
    
    int i,j,n;

    printf("Dizi eleman sayisini belirleyiniz:\n");
    scanf("%d",&n);

    int a[100],b[100],c[100],d[100]={0},temp[100]={0};

    for ( j = 0; j < n; j++)
    {
        printf("a dizisinin elemanlarini giriniz:");
        scanf("%d",&a[j]);        
    }
        
    for ( j = 0; j < n; j++)
    {
        printf("b dizisinin elemanlarini giriniz:");
        scanf("%d",&b[j]);
    }

    for ( j = 0; j < n; j++)
    {
        printf("c dizisinin elemanlarini giriniz:");
        scanf("%d",&c[j]);
    }


    printf("d dizisi = a + b - c\n");

    for ( j = 0; j < n; j++)
    {
        d[j] = a[j] + b[j] - c[j];
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (d[i] < d[j])
            {
                temp[0] = d[i];
                d[i] = d[j];
                d[j] = temp[0];
            }
            else
            {
                continue;
            }
            
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",d[i]);
    }
    

    return 0;
}