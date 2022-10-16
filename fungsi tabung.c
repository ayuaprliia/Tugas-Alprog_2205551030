
//fungsi luas permukaan dan volume tabung

#include <stdio.h>
#define PHI 3.14

//deklarasi fungsi

float Lp_tabung (float r, float t){
	float Lp = 2*PHI*r*(r+t);
	
	return Lp;
}
float volume_tabung (float r, float t){
	float volume = PHI*r*r*t;
	
	return volume;
}



//deklarasi variabel

int main (){
	float r, t, Lp, volume;
	
	printf("Masukkan nilai jari_jari tabung = ");
	scanf("%f", &r);
	
	printf("Masukkan nilai tinggi tabung = ");
	scanf("%f", &t);

//pemanggilan fungsi	
	Lp = Lp_tabung (r,t);
 	volume = volume_tabung (r,t);
 	
	printf ("\n Luas Permukaan tabung adalah = %.2f", Lp);
	printf ("\n Volume tabung dalah = %.2f", volume);
	
return Lp, volume;
	
}
