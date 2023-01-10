#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main 
() {
	int i,dizi[i],n,secim,j,dizitoplam=0,diziort=0,ters[i],max=0,min=0;
	
	printf("Lütfen kaç elemanli dizi yazmak istediginizi giriniz: ");
	
	scanf("%d",&n);
	
	printf("Lütfen dizinin elamanlarini giriniz: ");
	
	for(i=0;i<n;i++){
	
			printf("Lütfen dizinin elemanlarini sirasiyla giriniz : ");
			scanf("%d",&dizi[i]);
		
	
}

 			for(i=0; i<n ; i++){
			 			
 			dizitoplam+=dizi[i];
 			diziort=dizitoplam/n;
 		}
	printf("Lütfen yapmak istediginiz islemi seciniz: ( 1-2-3-4-5-6)\n 1-Dizinin toplamý\n2-Dizinin ortalamasi\n3-Dizinin ortalamasýndan büyük olan elemanlarý göster\n4-Dizinin elemanlarýný baþka bir diziye tersten yerleþtir\n5-Dizinin en küçük ve en büyük elemanýný bul\n6-Dizinin elamanlarini küçükten büyüðe doðru siralayarak tekrardan yaziniz.\n");
	printf("Lütfen giriniz:   ");
	scanf("%d",&secim);
		
 	switch(secim){
 		
 		case 1:
 			
 			printf("Sayilarin toplami= ");
 			
 			printf("%d",dizitoplam);
 		
        	break;
 		
 		case 2: 
 		 
 			
 			printf("%d",diziort);
 		
    	break;
 		
 	 	case 3:
 	 		
 	 		for(i=0;i<=n;i++){
 	 			
 	 			if(dizi[i]>diziort){
 	 				printf("%d",dizi[i]);
				  }
			  }
 	 		
 			
 		break;
 		
 		case 4:
 			
 			for(i=0; i<=n ;i++){
 				
 				ters[i]=dizi[n-i];
 				 
 				printf("%d",ters[i]);
 				 	
			 }
 				 break;
 			
 			case 5:
 				
 				for(i=1; i<=n-1 ; i++){
				 
 					
 					if(dizi[i+1] >= dizi[i]);
 						 
 						max=dizi[i];
 						
					 }	
					 
				for(i=0 ; i<n-1 ; i++ ){
				
					
					if(dizi[i]<dizi[i+1]){
				
						min=dizi[i];
						
					}
					
					
				}
				
				printf("Minimum deger= %d\n",min);
 				
 				printf("Maximum deger= %d\n",max);
 			
 			break;
 			
 			
 			case 6:
 				
 				for(i=0  ; i<n-1 ; i++ );
 				
 				
 				
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 	
 		default:
 			
 			printf("Hatalý tuþlama yaptiniz.Lütfen 1-2-3-4-5-6 sayilarindan birine gidiniz.");
	 }
}
