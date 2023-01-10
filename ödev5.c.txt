#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    
    int i;

    char str[100],str2[100];

    printf("Cumle giriniz.\n");
    gets(str);

    str[0] -= 32;

    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i+1] -=32;
        }
    }
    
    printf("Yeni cumle:\n");
    puts(str);
    


    return 0;
}