//Verilen bir tam sayi dizisi bir cizgenin tepe derecelerine karsilik getirildiginde cizgenin cizilip cizilmedigi ekrana yazdiran c kodu
#include <stdio.h>
void main() {
	int i, j, a, n, sayi[30],toplam,kontrol,ilk;
    printf("Dizideki eleman sayisini giriniz: \n");
    scanf("%d", &n);
    if(n<1) {
    	printf("Cizilemez");
    	exit(0);
	}
 
    printf("Dizideki elemanlarin degerlerini giriniz: \n");
    for (i = 0; i < n; ++i) {
    	scanf("%d", &sayi[i]); //kullanicidan sayilari alma 
		toplam += sayi[i];
		if(sayi[i] > n-1) { //Adim 1: Herhangi bir elemani n-1 degerinden buyuk ise cizilemez
			printf("Cizilemez");
    		exit(0);
		}
	}
    
    if(toplam%2 == 1) printf("Cizilemez"); //Adim 1: Toplamlari tek sayi ise cizilemez
    else {
    	while(1) {
    		for(i=0;i<n;i++) {
    			if(sayi[i] <0) {
    				printf("Cizilemez.");
    				exit(0);
				}
			kontrol+=sayi[i];	
			}
			if(kontrol == 0) {
				printf("Cizilebilir!"); //Adim 2
				exit(0);
			}
			else {
				//Adim 3: Diziyi azalan sekilde sirala
				for (i = 0; i < n; ++i) { 
        			for (j = i + 1; j < n; ++j) {
            			if (sayi[i] < sayi[j]) {
            				a =  sayi[i];
                			sayi[i] = sayi[j];
                			sayi[j] = a;
						}
        			}
    			}
    			ilk = sayi[0];
    			for(i=0;i<n;i++) sayi[i] = sayi[i+1]; //Adim 4: Dizinin ilk elemanini diziden silme
    			for(i=0;i<ilk;i++) sayi[i] -= 1; //Adim 4: Dizinin sonraki n elemanini 1 azaltma
    			//Debug
				for(i=0;i<n;i++) printf("%d ",sayi[i]);
				printf("\n");
			}
			kontrol = 0;
		}
	}
}
