#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int i,n,a[100];

    printf("Dizi eleman sayisini belirleyiniz:\n");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        if (i%2 == 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
        
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    


    return 0;
}