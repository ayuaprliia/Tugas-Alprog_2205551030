//fungsi peluang

#include <stdio.h>

//deklarasi fungsi
float hitung_peluang (float A, float S){
	float peluang = A/S;
	
	return peluang;
}

//deklarasi variabel
int main (){

float A, S, peluang;

printf ("Masukkan banyaknya kejadian n(A) = ");
scanf ("%f", &A);

printf ("\nMasukkan banyaknya ruang sampel n(S) = ");
scanf ("%f", &S);

//pemanggilan fungsi
peluang = hitung_peluang (A, S);

printf ("\nMaka peluang kejadian adalah %f", peluang);

return peluang;
}
