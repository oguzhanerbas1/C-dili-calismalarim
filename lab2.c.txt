#include <stdio.h>
#include <stdbool.h>

int main(){
    
    char str1[1000],str2[1000],fullstr[1000],max,min;
    int i,islem,j,k,l;    
    printf("lutfen birinci stringi giriniz\n");
    gets(str1);

    printf("lutfen ikinci stringi yaziniz\n");
    gets(str2);

    printf("lutfen islemi turunu seciniz\n");
    scanf("%d",&islem);
    
    for ( j = 0; str2[j] != '\0'; j++){}
    for ( i = 0; str1[i] != '\0'; i++){}


    while(islem!=-1)
    {

        switch (islem)
        {
        case 1:
            printf("%d\n",i);
            break;
            
        case 2:
            printf("%d\n",j);
            break;

        case 3:
            for ( k = 0; k < i; k++)
            {
                fullstr[k] = str1[k];
            }
            
            for ( l = i; l < i+j; ++l)
            {
                fullstr[l] = str2[l-i];
            }
            
            fullstr[i+j] = '\0';

            printf("%s\n",fullstr);
            break;

        case 4:
            max = str1[0];
            for ( k = 0; k < i; k++)
            {
                if (max < str1[k])
                {
                    max = str1[k];
                }
            }
            printf("%c\n",max);
            break;
        case 5:
            min = str2[0];
            for ( k = 0; k < j; k++)
            {
                if (min > str2[k])
                {
                    min = str2[k];
                }
            }
            printf("%c\n",min);
            break;

        default:
            break;
        }

        printf("Yeniden islem turunu giriniz:\n");
        scanf("%d",&islem);
    }    

    return 0;
}