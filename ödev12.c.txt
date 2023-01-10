#include <stdio.h>
#include <stdbool.h>

int main(){
    
    char bi1[1000],bi2[1000],bi3[1000];
    int i,j;

    printf("1. Binary i giriniz: ");
    gets(bi1);

    printf("1. Binary i giriniz: ");
    gets(bi2);

    for ( i = 0; i < 8; i++)
    {
        if (bi1[i] == '0' && bi2[i] == '0') 
        {
            bi3[i] = '0';
        }
        else if (bi1[i] == '1' && bi2[i] == '1')
        {
            bi3[i] = '0';
        }
        else
        {
            bi3[i] = '1';
        }
        
    }

    puts(bi3);
    


    
    


    return 0;
}