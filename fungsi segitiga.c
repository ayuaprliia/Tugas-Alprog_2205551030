//fungsi keliling dan luas segitiga
#include <stdio.h>

//pendeklarasian fungsi keliling segitiga
int keliling_segitiga (int alas, int tinggi, int sisi_miring){
	int keliling = (alas + tinggi + sisi_miring);
	
	return keliling;
}

//deklarasi fungsi luas segitiga
int luas_segitiga (int alas, int tinggi, int sisi_miring){
	int luas = (alas*tinggi)*1/2;
	
	return luas;
}

int main (){

//pendeklarasian variabel
	int alas, tinggi, sisi_miring, luas, keliling;
	
	printf("Masukkan nilai alas = ");
	scanf("%d", &alas);

	printf("Masukkan nilai tinggi = ");
	scanf("%d", &tinggi);

	printf("Masukkan nilai sisi_miring = ");
	scanf("%d", &sisi_miring);

//pemanggilan fungsi	
	keliling = keliling_segitiga (alas, tinggi, sisi_miring);
	luas = luas_segitiga (alas, tinggi, sisi_miring);

//output fungsi	
	printf("\nNilai keliling segitiga adalah %d", keliling);
	printf("\nNilai luas segitiga adalah %d", luas);
	
return keliling, luas;
}
