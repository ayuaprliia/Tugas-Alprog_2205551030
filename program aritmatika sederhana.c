//fungsi operasi bilangan aritmatika sederhana

/*
Komang Ayu Agung Arya Aprilia
2205551030
Algoritma pemrograman B */


#include <stdio.h>
#define PHI 3.14

//deklarasi fungsi segitiga
int kll_segitiga_sikusiku (int alas, int tinggi, int sisi_miring){
int kll = alas + tinggi + sisi_miring;
return kll;
}
int luas_segitiga_sikusiku (int alas, int tinggi){
int luas = (alas*tinggi)*0.5;
return luas;
}

//deklarasi fungsi persegi panjang
int kll_persegipanjang (int p, int l){
	int kll = 2*(p+l);
	return kll;
}
int luas_persegipanjang (int p, int l){
	int luas = p*l;
	return luas;
}

//deklarasi fungsi tabung
float Lp_tabung (float r, float t){
	float Lp = 2*PHI*r*(r+t);
	
	return Lp;
}
float volume_tabung (float r, float t){
	float volume = PHI*r*r*t;
	
	return volume;
}

//deklarasi fungsi kecepatan
float hitung_kecepatan (float j, float w){
	float kecepatan = j/w;
	return kecepatan;
}

//deklarasi fungsi peluang
float hitung_peluang (float nA, float nS){
	float peluang = nA/nS;
	return peluang;
}

//deklarasi fungi aritmatika
float Un_aritmatika (int n, float a, float b){
	float Un = a+(n-1)*b;
	
	return Un;
}
float Sn_aritmatika (int n, float a, float b, float Un){
	float Sn = n*0.5*(a + Un_aritmatika (n,a,b));
	
	return Sn;
}

//deklarasi fungsi rumus debit air
float debit_air (float v, float w){
	float debit = v/w;
	
	return debit;
}

int main (){
	int pilih;
	char ulang;

menu:
	
	system("cls");
    printf("\n");
    printf("    |===========================================================|\n");
    printf("    |---------------Komang Ayu Agung Arya Aprilia---------------|\n");
    printf("    |-----------------------2205551030--------------------------|\n");
    printf("    |             {Operasi Aritmatika Sederhana}                |\n");
    printf("    |===========================================================|\n");
    printf("    |     [1]. luas dan keliling segitiga siku-siku             |\n");
    printf("    |     [2]. luas dan keliling persegi panjang                |\n");
    printf("    |     [3]. Luas dan volume tabung                           |\n");
    printf("    |     [4]. kecepatan                                        |\n");
    printf("    |	  [5]. peluang                                      |\n");
    printf("    |	  [6]. baris dan deret aritmatika                   |\n");
    printf("    |	  [7]. debit air                                    |\n");		
    printf("    |     [8]. keluar                                           |\n");
    printf("    |===========================================================|\n");
    printf("     Masukkan pilihan operator [1][2][3][4][5][6][7][8]  : "           );
    scanf("%d",&pilih);
    
    switch (pilih)
 {
  case 1: input:
    system("cls");
    int alas, tinggi, sisi_miring, kll, luas;
        printf("  |-------------------------------------------------------|\n");
	printf("  |                   SEGI TIGA SIKU-SIKU                 |\n");
	printf("  |-------------------------------------------------------|\n\n");
	printf("  masukkan nilai alas     =                        "); alas = validasi ();
	printf("  masukkan nilai tinggi   =                        "); tinggi = validasi ();
	printf("  masukkan nilai s_miring =                        "); sisi_miring = validasi ();
	
	            kll = kll_segitiga_sikusiku (alas,tinggi, sisi_miring);
	            luas = luas_segitiga_sikusiku (alas, tinggi);
	printf("\n\njadi, nilai keliling adalah =                      %d  ", kll);
	printf("\njadi, nilai luas adalah       =                    %d    ", luas);
	printf("\n\nApakah Ingin Mengulang ? (Y/T) ");
    scanf("%s",&pilih);
     if (pilih == 'Y' | pilih == 'y'){
         goto menu; }
     else if (pilih == 'T' | pilih == 't'){
     	printf("\n-------------TEKAN ENTER UNTUK KELUAR DARI PROGRAM-----------------------");
         }
     else {
        goto menu; }
        {
            break;
   
        }
}
        
    switch (pilih)
{
case 2:
	system("cls");
    int p, l, kll, luas;
    printf("  |-------------------------------------------------------|\n");
    printf("  |                   PERSEGI PANJANG                     |\n");
    printf("  |-------------------------------------------------------|\n\n");
    printf("  masukkan nilai panjang =                        "); p = validasi ();
    printf("  masukkan nilai lebar   =                        "); l = validasi ();
	
	            kll = kll_persegipanjang (p, l);
	            luas = luas_persegipanjang (p, l);
	printf("\n\njadi, nilai keliling adalah =                    %d cm  ", kll);
	printf("\njadi, nilai luas adalah       =                  %d  cm  ", luas);
	printf("\n\nApakah Ingin Mengulang ? (Y/T) ");
    scanf("%s",&pilih);
     if (pilih == 'Y' | pilih == 'y'){
         goto menu; }
     else if (pilih == 'T' | pilih == 't'){
     	printf("\n-------------TEKAN ENTER UNTUK KELUAR DARI PROGRAM-----------------------");
         }
     else {
        goto menu; }
        {
            break;
   
        }
}
    
    switch  (pilih)
{
	case 3:
		system("cls");
    float r, t, Lp, volume;
    printf("  |-------------------------------------------------------|\n");
	printf("  |                       TABUNG                          |\n");
	printf("  |-------------------------------------------------------|\n\n");
	printf("  masukkan nilai jari-jari =                      "); r = validasi ();
	printf("  masukkan nilai tinggi    =                      "); t = validasi ();
	            Lp = Lp_tabung (r, t);
	            volume = volume_tabung (r, t);
	printf("\n\n  jadi, nilai Luas Permukaan adalah =           %f  ", Lp);
	printf("\n  jadi, nilai Volume adalah           =         %f    ", volume);
	printf("\n\n  Apakah Ingin Mengulang ? (Y/T) ");
    scanf("%s",&pilih);
     if (pilih == 'Y' | pilih == 'y'){
         goto menu; }
     else if (pilih == 'T' | pilih == 't'){
     	printf("\n-------------TEKAN ENTER UNTUK KELUAR DARI PROGRAM-----------------------");
         }
     else {
        goto menu; }
        {
            break;
   
        }
}

switch (pilih)
{
	case 4 :
	system("cls");
    float j, w, kecepatan;
    printf("  |-------------------------------------------------------|\n");
	printf("  |                      KECEPATAN                        |\n");
	printf("  |-------------------------------------------------------|\n\n");
	printf("  masukkan nilai jarak (meter) =                  "); j = validasi ();
	printf("  masukkan waktu (detik)       =                  "); w = validasi ();
	
	            kecepatan = hitung_kecepatan (j, w);
	printf("\n\n  jadi, nilai kecepatan adalah =               %f meter/detik  ", kecepatan);
	printf("\n\n  Apakah Ingin Mengulang ? (Y/T) ");
    scanf("%s",&pilih);
     if (pilih == 'Y' | pilih == 'y'){
         goto menu; }
     else if (pilih == 'T' | pilih == 't'){
     	printf("\n-------------TEKAN ENTER UNTUK KELUAR DARI PROGRAM-----------------------");
         }
     else {
        goto menu; }
        {
            break;
   
        }
}

switch (pilih)
{
	case 5:
		system("cls");
    float nA, nS, peluang;
    printf("  |-------------------------------------------------------|\n");
	printf("  |                     PELUANG                           |\n");
	printf("  |-------------------------------------------------------|\n\n");
	printf("  masukkan banyaknya kejadian  nA =               "); nA = validasi ();
	printf("  masukkan banyak ruang sampel nS =               "); nS = validasi ();
			   
	        	peluang = hitung_peluang (nA, nS);
	printf("\n\n  jadi, peluang kejadian adalah =              %f  ", peluang);
	printf("\n\n  Apakah Ingin Mengulang ? (Y/T) ");
    scanf("%s",&pilih);
     if (pilih == 'Y' | pilih == 'y'){
         goto menu; }
     else if (pilih == 'T' | pilih == 't'){
     	printf("\n-------------TEKAN ENTER UNTUK KELUAR DARI PROGRAM-----------------------");
         }
     else {
        goto menu; }
        {
            break;
   
        }
}

switch (pilih)
{
	case 6:
	system("cls");
    float a, b, Un, Sn;
    int n;
    printf("  |-------------------------------------------------------|\n");
	printf("  |             BARIS DAN DERET ARITMATIKA                |\n");
	printf("  |-------------------------------------------------------|\n\n");
	printf("  masukkan banyak suku (n) =                      "); n = validasi ();
	printf("  masukkan suku pertama (a)=                      "); a = validasi ();
	printf("  masukkan beda (b)        =                      "); b = validasi ();	
	            Un = Un_aritmatika (n, a, b);
	            Sn = Sn_aritmatika (n, a, b, Un);
	printf("\n\n  jadi, nilai Un adalah =                      %f  ", Un);
	printf("\n  jadi, nilai Sn adalah   =                    %f    ", Sn);
	printf("\n\n  Apakah Ingin Mengulang ? (Y/T) ");
    scanf("%s",&pilih);
     if (pilih == 'Y' | pilih == 'y'){
         goto menu; }
     else if (pilih == 'T' | pilih == 't'){
     	printf("\n-------------TEKAN ENTER UNTUK KELUAR DARI PROGRAM-----------------------");
         }
     else {
        goto menu; }
        {
            break;
   
        }
}

switch (pilih)
{
	case 7:
	system ("cls");
	float v, w, debit;
	printf("  |-------------------------------------------------------|\n");
	printf("  |               MENCARI JUMLAH DEBIT AIR                |\n");
	printf("  |-------------------------------------------------------|\n\n");
	printf("  masukkan nilai volume air (liter) =             "); v = validasi ();
	printf("  masukkan waktu (detik)    =                     "); w = validasi ();

	            debit = debit_air (v, w);
	printf("\n\n  jadi, nilai debit air adalah =               %f liter/detik  ", debit);
	printf("\n\n  Apakah Ingin Mengulang ? (Y/T) ");
    scanf("%s",&pilih);
     if (pilih == 'Y' | pilih == 'y'){
         goto menu; }
     else if (pilih == 'T' | pilih == 't'){
     	printf("\n-------------TEKAN ENTER UNTUK KELUAR DARI PROGRAM-----------------------");
         }
     else {
        goto menu; }
        {
            break;
   
        }
	
}
	
switch (pilih)
{
	case 8: keluar:
printf("\n       ======ANDA MEMILIH UNTUK KELUAR DARI PROGRAM=======");
printf("\n\n     ------TEKAN ENTER UNTUK KELUAR DARI PROGRAM--------");


}

return 0;

}

void correct(int *var, char *prompt);
  
int check(int *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}



//Validasi Inputan Bilangan
void correct(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(check(var))
			break;
		printf("\tINPUT HANYA BERUPA BILANGAN, MOHON INPUT ULANG!\n");
		printf("\n");
	}
}

int validasi(){
	int angka;
    char karakter;
    scanf("%d%c", &angka, &karakter);
    if(karakter != '\n' || angka<0){
        printf("\n   INPUT HANYA BERUPA ANGKA, MOHON INPUT ULANG!\n\n");
        printf("   Input ulang : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}


