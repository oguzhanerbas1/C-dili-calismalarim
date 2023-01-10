#include <stdio.h>

int main(){
    
    int n;

    scanf("%d",&n);

    int array[n][n],i,k,j,h,array2[n][n],b=n,c,d;

    for ( c = 0; c < n; c++)
    {
        for ( d = 0; d < n; d++)
        {
            scanf("%d",&array[c][d]);
        }
        
    }
    


    
    for ( j = 0; j < n; j++)
    {
        for ( h = 0; h < n; h++)
        {
            
            array2[j][h] = array[j][b-1];
            b--;
            
        }
        b=n;
    }
    
    
    /*for ( j = 0; j < 3; j++)
    {
        for ( h = 0; h < 3; h++)
        {
            array[j][h] = array[h][j];
        }
        
    }*/



    for ( i = 0; i < n; i++)
    {
        for ( k = 0; k < n; k++)
        {
            printf("%d  ",array2[i][k]);
        }
        printf("\n");
    }
    


    return 0;
}