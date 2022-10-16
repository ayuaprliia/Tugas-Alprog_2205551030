//fungsi menghitung keliling dan luas persegi panjang

#include <stdio.h>

//deklarasi fungsi keliling persegi panjang
int keliling_persegipanjang (int panjang, int lebar){
	int keliling = 2*(panjang + lebar);
	
	return keliling;	
}
//deklarasi fungsi luas persegi panjang
int luas_persegipanjang (int panjang, int lebar){
	int luas = panjang*lebar;
	
	return luas;
}


int main (){
//deklarasi variabel
	int panjang, lebar, keliling, luas;
	
	printf("Masukkan nilai panjang = ");
	scanf("%d", &panjang);
	
	printf("Masukkan nilai lebar = ");
	scanf("%d", &lebar);
	
//pemanggilan fungsi
keliling = keliling_persegipanjang (panjang, lebar);
luas = luas_persegipanjang (panjang, lebar);

//output fungsi
printf ("\nNilai keliling persegi panjang adalah %d", keliling);
printf("\nNilai luas persegi panjang adalah %d", luas);

return keliling, luas;
}
