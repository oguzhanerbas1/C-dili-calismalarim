#include <stdio.h>
#include <stdbool.h>

int main(){

    char str[1000],temp[1000];
    
    int i,j=0,m=j;

    printf("Kelimeyi giriniz:\n");
    gets(str);

    for (i = 0; str[i] != '\0' ; i++){}

    for (j = 0; j < i*2; j+=2)
    {
        temp[j] = str[m];
        temp[j+1] = ' ';
        m++;
    }
    temp[i*2] = '\0';
    
    puts(temp);


    return 0;
}