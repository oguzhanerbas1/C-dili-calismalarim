#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int j,i,a[2][2]={{2,9},{5,3}},b[2][2]={{8,-6},{-7,0}},temp[2][2];

    char kelime[1000];

    /*for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    */
    printf("Kelime giriniz:\n");
    gets(kelime);

    temp[2][2] = a[2][2] * b[2][2];


    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}