#include <stdio.h>
#include <stdbool.h>

int main(){
    
    char str[1000],str2[1000];
    int i;

    printf("Cumleyi giriniz:\n");
    gets(str);

    printf("Aratmak istediginiz kelimeyi giriniz:\n");
    gets(str2);

    for (i = 0; str2[i] != '\0'; i++){}
    
    for (int j = 0; str[j] != '\0'; j++)
    {
        
    }
    
    

    return 0;
}