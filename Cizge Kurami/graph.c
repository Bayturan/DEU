#include <stdio.h>
#define n  3

struct tepe {
	int komsu[n];
	int tepederece;
	int teperengi; //0 = kirmizi ; 1 mavi; 2 bos
};

int main() {
	int i,j,tepe,d[n];
	struct tepe G[n];
	//Cizge matrisi olusturma
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j) G[i].komsu[j] = 0;
			else {
				printf("%d ve %d tepelrinin komsuluk bilgilerini giriniz: ", i+1,j+1);
				scanf("%d",&G[i].komsu[j]);
			}
		}
		G[i].teperengi = 2;
	}
	//Tepe derecelirini bulma
	for(i=0;i<n;i++) {
		tepe = 0;
		for(j=0;j<n;j++) {
			tepe+=G[i].komsu[j];
			//printf("%d tepesinin derecesi = %d \n",i+1,tepe);
			d[i] = tepe; //min ve max tepeleri bulmak icin sakliyoruz
		}
		printf("%d tepesinin derecesi : %d \n",i+1,tepe);
	}
	
	//Tepe boyama
	G[0].teperengi = 1;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(G[i].komsu[j] == 1) {
				if(G[j].teperengi == 2) G[j].teperengi = (G[i].teperengi + 1)%2; //Eger renk atamasi yapilmamissa i tepesinin tersi rengi kullanilir
				else if(G[j].teperengi == (G[i].teperengi + 1)%2) continue; //Eger i tepesinin tersi rengindeyse devam eder
				else if(G[j].teperengi == G[i].teperengi) {
					printf("Iki parcali degildir.");
					i=n+1;
					break;
				}
			}
		}
	}
	if(i<n+1) printf("Cizge Iki parcalidir");
	
}
