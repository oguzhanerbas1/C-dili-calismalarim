#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int n,i,x,tplm=0,k=0,z=0;
    float ort = 0;

    printf("dizinin eleman sayisini giriniz:\n");
    scanf("%d",&x);

    int A[x],C[x],B[x];

    printf("Dizinin elemanlarini giriniz:\n");

    for ( n = 0; n < x; n++)
    {
        scanf("%d",&A[n]);
        tplm+=A[n];
    }
    
    ort = tplm/x;
    printf("%f\n",ort);

    for ( i = 0; i < x; i++)
    {
        if (A[i] > ort)
        {
            C[z] = A[i];
            z++;
            printf("%d\n",C[z]);
        }
        else if (A[i] < ort)
        {
            B[k] = A[i];
            k++;
            printf("%d\n",B[k]);
        }
                
    }
    
    return 0;
}