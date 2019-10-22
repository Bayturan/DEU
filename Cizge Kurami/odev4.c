#include <stdio.h>
#define n 3

void main() {
	int G[n][n],i,j,tepe[n]={0};
	printf("Cizgenin komsuluk matrisini yaziniz:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j) G[i][j]=0;
			else {
				printf("%d ve %d tepelerinin komsuluk degerini yaziniz:",i+1,j+1);
				scanf("%d",&G[i][j]);
				tepe[i] += G[i][j];
			}
		}
	}
	for(i=1;i<n;i++) {
		if(tepe[i] != tepe[0]) {
			printf("Cizge duzenli degil.");
			exit(0);
		}
	}
	printf("Cizge Duzenli !");
}
