#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int i,j,n,k;

    printf("Dizi eleman sayisini belirleyiniz:\n");
    scanf("%d",&n);

    k = n%2;

    int a[100],b[100];

    for ( j = 0; j < n; j++)
    {
        printf("a dizisinin elemanlarini giriniz:");
        scanf("%d",&a[j]);        
    }

    for ( i = 0; i < n; i++)
    {
        b[n-i-1] = a[i];
    }

    for ( i = 0; i < n; i++)
    {
        b[i] *= -1;
        printf("%d ",b[i]);
    }
    
    
    
    

    return 0;
}