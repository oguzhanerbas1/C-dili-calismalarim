#include <stdio.h>
#include <stdbool.h>

double OrtalamaHesaplama(int dizi[], int elemansayisi, int yontem);
double harmonik(int dizi[], int n);
double aritmetik(int dizi[], int n);
double geometrik(int dizi[], int n);


int main(){
    
    int n,islem,i;

    printf("Dizinin eleman sayisini giriniz:\n");
    scanf("%d",&n);

    int dizi[1000];

    for (i = 0; i < n; i++)
    {
        printf("Dizinin elemanlarini giriniz:\n");
        scanf("%d",&dizi[i]);
    }
    
    printf("Islem yöntemini secinizi:\n");
    printf("1:Aritmetik\n");
    printf("2:Harmonik\n");
    printf("3:Geometrik\n");
    scanf("%d",&islem);

    

    printf("%lf", OrtalamaHesaplama(dizi, n, islem));

    return 0;

}

double OrtalamaHesaplama(int dizi[], int elemansayisi, int yontem)
{
    double a;
    switch (yontem)
    {
    case 1:
        return aritmetik(dizi, elemansayisi);
        break;

    case 2:
        return harmonik(dizi, elemansayisi);
        break;

    case 3:
        return geometrik(dizi, elemansayisi);
        break;

    default:
        break;
    }

    
}

double aritmetik(int dizi[], int n)
{
    int i,tplm=0;

    for ( i = 0; i < n; i++)
    {
        tplm += dizi[i]; 
    }
    
    return tplm/n;
}

double harmonik(int dizi[], int n)
{
    int i,tplm=0;

    for ( i = 0; i < n; i++)
    {
        tplm += 1/dizi[i];
    }
    
    return n/tplm;
}

double geometrik(int dizi[], int n)
{
    int i,crpm=1;

    for ( i = 0; i < n; i++)
    {
        crpm *= dizi[i];
    }
    
    return (crpm)^(1/n);
}