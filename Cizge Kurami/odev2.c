//Verilen bir tam sayi dizisi bir cizgenin tepe derecelerine karsilik getirildiginde cizgenin cizilip cizilmedigi ekrana yazdiran c kodu
#include <stdio.h>
void main() {
	int i, j, a, n, sayi[30];
    printf("Dizideki eleman sayisini giriniz: \n");
    scanf("%d", &n);
 
    printf("Dizideki elemanlarin degerlerini giriniz: \n");
    for (i = 0; i < n; ++i) scanf("%d", &sayi[i]); //kullanicidan sayilari alma
    
    //siralama islemi
    for (i = 0; i < n; ++i) { 
        for (j = i + 1; j < n; ++j) {
            if (sayi[i] < sayi[j]) {
            	a =  sayi[i];
                sayi[i] = sayi[j];
                sayi[j] = a;
			}
        }
    }
 
    printf("Siralanmis hali \n");
    for (i = 0; i < n; ++i) {
    	printf("%d\n", sayi[i]);
	}
}
