#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a,n,toplam,i,j,ort,k,m,min,max,temp;

    printf("Dizi eleman sayisini giriniz:\n");
    scanf("%d",&n);

    int array[n],array2[n];

    printf("Elemanlari giriniz:\n");
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&array[j]);
        toplam += array[j];
    }
    
    ort = toplam/n;

    printf("Islemi seciniz:\n");
    scanf("%d",&a);

    while (a!=-1)
    {
        switch (a)
        {
        case 1:
            printf("%d\n",toplam);

            printf("Yeniden islem seciniz:\n");
            scanf("%d",&a);
            break;
        
        case 2:
            printf("%d\n",ort);

            printf("Yeniden islem seciniz:\n");
            scanf("%d",&a);
            break;

        case 3:
            for ( k = 0; k < n; k++)
            {
                if (ort<array[k])
                {
                    printf("%d\n",array[k]);
                }
                
            }
            printf("Yeniden islem seciniz:\n");
            scanf("%d",&a);
            break;

        case 4:
            i = 0;
            j = n-1;
            while (i<n)
            {
                array2[i] = array[j];
                printf("%d\n",array2[i]);
                i++;
                j--;
            }
        
            printf("Yeniden islem seciniz:\n");
            scanf("%d",&a);
            break;

        case 5:
            min = array[0];
            max = array[0];

            for ( i = 0; i < n; i++)
            {
                if (max>array[i])
                {
                    max = array[i];
                }
            }
            
            for ( j = 0; j < n; j++)
            {
                if (min<array[j])
                {
                    min = array[j];
                }
                
            }
            
            printf("Min ve Max:\n");
            printf("%d %d\n",min,max);

            printf("Yeniden islem seciniz:\n");
            scanf("%d",&a);
            break;

        case 6:

            for ( i = 0; i < n; i++)
            {
                for ( j = 0; j < n; j++)
                {
                    if (array[i]>array[j])
                    {
                        temp = array[j];
                        array[j] = array[i];
                        array[i] = temp;
                    }
                    
                }
                
            }
            
            for ( m = 0; m < n; m++)
            {
                printf("%d\n",array[m]);
            }
            
            printf("Yeniden islem seciniz:\n");
            scanf("%d",&a);
            break;

        default:
            printf("Yeniden islem seciniz:\n");
            scanf("%d",&a);
            break;
        }
    }
        return 0;
    }