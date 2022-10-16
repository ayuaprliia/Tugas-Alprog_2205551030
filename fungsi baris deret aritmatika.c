//fungsi baris dan deret aritmatika

#include<stdio.h>

//pendeklarasian fungsi mencari nilai Un
float Un_aritmatika (int n, float a, float b){
	float Un = a + (n-1)*b;

return Un;
}

//pendeklarasian fungsi mencari nilai Sn
float Sn_aritmatika (int n, float a, float b, float Un){
	float Sn = n*0.5*(a + Un_aritmatika (n,a,b));
	
return Sn;
}

int main (){
	
//pendeklarasian variabel

int n;
float a, b, Un, Sn;

printf("Masukkan banyak suku (n) = ");
scanf ("%d", &n);

printf("Masukkan suku pertama (a) = ");
scanf ("%f", &a);

printf ("Masukkan nilai beda (b) = ");
scanf ("%f", &b);


//pemanggilan fungsi
Un = Un_aritmatika (n, a, b);
Sn = Sn_aritmatika (n, a, b, Un_aritmatika (n, a, b));

//output fungsi
printf ("\nNilai Un adalah %f", Un);
printf ("\nNilai Sn adalah %f", Sn);

return Un, Sn;
}
