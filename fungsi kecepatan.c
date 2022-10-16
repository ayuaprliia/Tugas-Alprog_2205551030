//fungsi rumus kecepatan, jarak, dan waktu

#include <stdio.h>

//deklarasi fungsi rumus kecepatan
int rumus_kecepatan (int jarak, int waktu){
	int kecepatan = jarak/waktu;
	
	return kecepatan;
}

//deklarasi variabel
int main (){

int jarak, waktu, kecepatan;

printf("Masukkan nilai jarak (meter) = ");
scanf ("%d", &jarak);

printf("Masukkan nilai waktu (detik) = ");
scanf ("%d", &waktu);

//pemanggilan fungsi

kecepatan = rumus_kecepatan (jarak, waktu);

printf ("\n\nNilai Kecepatan adalah %d meter/detik", kecepatan);


return kecepatan;
}
