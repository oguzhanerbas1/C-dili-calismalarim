#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int not[10][3],i,k,j,tplm = 0;

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Notlari giriniz:\n");
            scanf("%d",&not[i][j]);
        }
    }

    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            tplm += not[i][j]; 
        }
        float ort = (float)tplm/3;
        printf("%.1f\n",ort);
        tplm = 0;
    }
    

    return 0;
}