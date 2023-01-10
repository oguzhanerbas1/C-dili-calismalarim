#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int tek,cift,sayi,i;
    int oran;



    for ( i = 1; i <= 4; i++)
    {

        printf("Lutfen sayi giriniz:\n");
        scanf("%d",&sayi);

        if (sayi%2==0)
        {
            cift+=sayi;
        }
        else
        {
            tek+=sayi;
        }
        
    }
    oran = cift/tek;

    printf("%d",oran);


    return 0;
}