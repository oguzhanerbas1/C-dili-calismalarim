#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    
    int a[100],b[100],c[100],i,n;

    printf("Dizi eleman sayisini belirleyiniz:\n");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("a dizisinin elemanlarini giriniz:\n");
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        b[i] = a[i]*a[i];
    }

    for ( i = 0; i < n; i++)
    {
        c[i] = sqrt(a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        a[i] = b[i] * c[i];
        printf("%d ",a[i]);
    }
    
    
    
    

    return 0;
}