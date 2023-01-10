#include <stdio.h>
#include <stdbool.h>

int main(){
    
    char str[1000],str2[1000];

    printf("Cumleyi giriniz:\n");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++){}
    
    int k = i;

    for (int j = 0; j < i; j++)
    {
        str2[j] = str[k-1];
        k--;
    }

    printf("Yeni cumle:\n");
    puts(str2);
    

    return 0;
}