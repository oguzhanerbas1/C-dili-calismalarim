#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

    //3X3 bir matris çizip kullanýcýdan veri giriþi alan sistem.

    int sayi[3] [3]={{1,2,3},{7,8,9}, };
    int i,b;
    for(i=0;i<3;i++)
    {
        for(b=0;b<3;b++)
        {
            printf("|%d|\t",sayi[i][b]);

        }
        printf("\n");
    }

// Random matrix denemem.

 int sayi[2][3]={1,2,3,4,5,6};
 int i,b;
    for(i=0;i<2;i++)
    {
        for(b=0;b<3
        8;b++)
        {
            printf("|%d|\t",sayi[i][b]);

        }
        printf("\n");
    }


    //Fibonacci serisinin ilk 10 terimini dizi kullanarak bulan programý yazýnýz.

    int i,dizi[10];

    dizi[0]=1,dizi[1]=1;

    for(i=0 ; i<8 ; i++)
    {

        dizi[i+2]=dizi[i+1]+dizi[i];


    }
    for(i=0  ; i<10 ; i++)
    {

      printf("%d\t",dizi[i]);

    }



 // Girilen bir kelimenin uzunluðunu bulan program.

 char str[100];
 int i=0;

    printf("Lütfen bir kelime giriniz:  ");

    gets(str);

   /* while(str[i]!='\0'){
        i++;

    }
    printf("Harf sayiniz: %d",i);


// Ýkinci bir yol þu þekildedir.


    for(i=0  ;str[i]!='\0' ; i++){

    }
    printf("%d",i);



    // Bir sayý dizisinin en büyük elemanýný bulan programý yazýnýz.

        int i,n;

        printf("Diziniz kaç elemanlý olsun beyfendi :  ");

        scanf("%d",&n);



        int dizi[n];

        int max=0,min=0;

        for(i=0 ; i<n ; i++)
        {

            printf("%d. sayiyi giriniz:  ",i+1);

            scanf("%d",&dizi[i]);

        }
        max=dizi[0];
        min=dizi[0];
        for(i=0 ; i<n ; i++)
        {

            if(dizi[i+1]>dizi[i])
            {
                max=dizi[i+1];
            }
            else
            {
                max=dizi[i];
            }

        }

            printf("max =====> %d\n",max);


        for(i=0 ; i<n ; i++)
        {
            if(dizi[i+1]<dizi[i])
            {
                min=dizi[i+1];
            }
            else
            {
                min=dizi[i];
            }
        }

        printf("min =====> %d",min);



//Girilen kelimeyi tersten yazdýran program.

    int i=0;

    char str[i];

    gets(str);

    while(str[i]!='\0')
    {
        i++;
    }

    printf("Beyfendi kelimeniz %d harfli :)",i);

    while(i>0)
    {
        printf("%c",str[i-1]);
        i--;
    }


    // Bir decimal sayýyý binary sayýya çeviren program.

    int sayi,i;
    int dizi[100];

    printf("Lütfen bir sayi giriniz :  ");
    scanf("%d",&sayi);

    while(sayi>0)
    {

        if(sayi%2==0)
        {
            dizi[i]=0;
        }
        else
        {
            dizi[i]=1;
        }
            i++;
            sayi=sayi/2;
    }
    while(i>0)
    {
    printf("%d",dizi[i-1]);
    i--;
    }

    // 10 elemanlý bir dizinin max deðerinin ve  o deðerin index numarasný yazýnýz:


int dizi[10],i,max;

for(i=0 ; i<10 ; i++)
{
    printf("Lütfen %d. ci sayiyi giriniz :  ",i+1);
    scanf("%d",&dizi[i]);

}
        max=dizi[i];

for(i=0 ; i<10 ; i++)
{
    if(dizi[i+1]>dizi[i])
    {
        max=dizi[i+1];
    }
    else
    {
        max=dizi[i];
    }
}
printf("Dizinin en büyük elemani => %d\n",max);

printf("Bu sayinin indisi => %d",i-1);



//n elemanlý bir diziye girilen raklamlarý sýrasýyla bir baþtan bir sondan yerleþtirilmesini saðlayan program.

int sayi,i=0,tane,newsayi,n;
int dizisayi[i];
printf("Lüfen bir sayý dizisi giriniz : ");
scanf("%d",&sayi);

//dizisayi[i]=sayi;

printf("Kaç deðer girmek istiyorsunuz beyfendi ? ");
scanf("%d",&tane);


    for(i=0 ; i<tane ; i++)
    {
        printf("Lütfen eklemek istediðiniz %d . ci sayiyi giriniz : \n ",i+1);
        scanf("%d",&newsayi);

        if(i+1%2!=0)
        {
            printf("%d%d",newsayi,sayi);
        }
        else
        {
            printf("%d%d",sayi,newsayi);
        }
    }


//Bir cümle giriniz ve kontrol deðiþkeni içerisindeki harften kaç adet olduðunu bulunuz.

    char str[100],kontrol;
    int i=0,n,ortak=0;

    printf("Lütfen bir kelime giriniz :  ");

    gets(str);

    printf("Lütfen kontrol etmek istediginiz harfi giriniz : ");
    scanf("%c",&kontrol);

    while(str[i]!='\0')
    {
        i++;
    }

    // i = karakter sayisi


    for(n=0 ; n<i ; n++)
    {
        if(str[n]==kontrol)
        {
            ortak+=1;
        }


    }
    printf("Bulunan harf sayisi %d ",ortak);




//İki karakter dizisini birleştirip tek bir diziye atayıp sonra da içindeki karakterleri ascıı numaralarına göre sıralayan program.


char str1[100],str2[100];
int i,n=0,k=0,t,sayac,dizi[100000];

printf("Birinci diziyi giriniz:  ");
gets(str1);
while(str1[k]!='\0')
{
    dizi[k]=str1[k];
    k++;
    sayac=k;
}
printf("İkinci diziyi giriniz:   ");
gets(str2);
while(str2[n]!='\0')
{
    dizi[sayac+n]=str2[n];                                                                                                                                                                                                                                                                                           ]
    n++;

}

        t=i+n;

printf("Ölçülen değer budur =>%s%s\n",str1,str2);

for()

printf("Lütfen bekleyiniz...");


for(i=0 ; i<t ; i++)
{
    if(str[i]<str[i+1])
    {
        printf("%c%c",str[i],str[i+1]);
    }
    else
    {
        printf("%c%c",str[i+1],str[i]);
    }
}
*/





























