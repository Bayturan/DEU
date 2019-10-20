#include <stdio.h>
#define n  3

int main() {	
	//Cizge matrisi olusturma
	int i,j,tepe,G[n][n],min,max,d[n];
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j) G[i][j] = 0;
			else {
				printf("%d ve %d tepelrinin komsuluk bilgilerini giriniz: ", i+1,j+1);
				scanf("%d",&G[i][j]);
			}
		}
	}
	//Tepe derecelirini bulma
	for(i=0;i<n;i++) {
		tepe = 0;
		for(j=0;j<n;j++) {
			tepe+=G[i][j];
			//printf("%d tepesinin derecesi = %d \n",i+1,tepe);
			d[i] = tepe; //min ve max tepeleri bulmak icin sakliyoruz
		}
		printf("%d tepesinin derecesi : %d \n",i+1,tepe);
	}
	
	//min tepe derecesi
	min = d[0];
	for(i=1;i<n;i++) {
		if(d[i]<min) min = d[i];
	}
	printf("Cizgenin min tepe derecesi = %d\n",min);
	
	//max tepe derecesi
	max = d[0];
	for(i=1;i<n;i++) {
		if(d[i]>max) max = d[i];
	}
	printf("Cizgenin max tepe derecesi = %d\n",max);
	
	
	
}
