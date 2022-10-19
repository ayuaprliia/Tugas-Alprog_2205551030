# Tugas-Alprog-2205551030

Komang Ayu Agung Arya Aprilia_2205551030  
Pada program kali ini, terdapat fungsi yang dapat digunakan untuk melakukan perhitungan aritmatika sederhana. Di dalam program ini termuat beberapa unsur-unsur seperti:
a.	Define PHI 3.14, yang akan mendefinisikan setiap variabel PHI dengan nilai 3.14. syntax define ini nantinya akan berguna pada program perhitungan luas permukaan dan volume tabung. 

 ![image](https://user-images.githubusercontent.com/114905113/196594360-dc863072-f413-41de-b5d3-34c8ad372e0e.png)



b.	Pendeklarasian fungsi
Di dalam program ini, fungsi sudah dideklarasikan di awal program. Fungsi-fungsi tersebut berupa sejumlah baris pernyataan yang berisikan rumus-rumus dari operasi bilangan yang termuat di dalam menu. Tujuan dari penggunaan fungsi ini adalah untuk menghindari penulisan kode program yang berulang kali.

 ![image](https://user-images.githubusercontent.com/114905113/196594379-12d914f9-a2e8-4c6e-b8b8-f3d948205e53.png)


c.	Pilihan menu
Menu yang terdapat di dalam program ini memuat beberapa operasi bilangan. User dapat memilih menu yang tersedia untuk melakukan operasi bilangan.

![image](https://user-images.githubusercontent.com/114905113/196594403-647da17d-dd6e-4708-bdd4-bd57194e7afe.png)

 
Gambar di atas menunjukkan output menu ketika program berhasil dijalankan. User dapat memilih salah satu dari 7 menu untuk menghitung operasi bilangan. Jika user berniat untuk keluar dari program, user dapat memilih menu nomor 8 untuk keluar dari program,.

d.	Operasi bilangan
Setelah user menginputkan piihan pada menu, program akan berlanjut pada operasi bilangan. User akan diminta untuk menginputkan sejumlah nilai yang diperlukan untuk nantinya akan memunculkan output berupa hasil operasi.

![image](https://user-images.githubusercontent.com/114905113/196594421-4fa6f164-dca6-4516-9ef2-6a0ef5a51a3e.png)

  
Pada program di atas menunjukkan ketika user memilih menu ke-3, yaitu program menghitung luas permukaan dan volume tabung. Di dalam program ini, user diminta untuk menginputkan nilai jari-jari serta tinggi dari tabung. Ketika inputan sudah benar, program akan menampilkan output “jadi, nilai luas permukaan adalah = …….”, dan “jadi, nilai volume adalah = …….”. 

e.	Validasi inputan bilangan
Validasi ini berguna untuk memastikan bahawa yang diinput itu hanya merupakan bilangan atau angka. Bila user menginputkan hal lain selain angka atau bilangan, program akan menampilkan output “INPUT HANYA BERUPA ANGKA, MOHON INPUT ULANG!”. Setelah itu, useri dapat menginput ulang bilangan untuk bisa lanjut ke tahap pengoperasian bilangan. Syntax dan hasil output  validasi dapat dilihat pada gambar di bawah ini.
 
 ![image](https://user-images.githubusercontent.com/114905113/196594450-06e7bef8-47a8-46cd-b954-79823efdb4d9.png)

Gambar di atas menunjukkan syntax yang digunakan untuk memvalidasikan inputan bilangan. Di setiap kode printf pada masing-masing pilihan operasi bilangan yang menginstruksikan user untuk menginputkan suatu nilai, diberi kode “variabel [spasi] = validasi () ;”. Contohnya bisa dilihat pada gambar di bawah ini. 

 ![image](https://user-images.githubusercontent.com/114905113/196594472-9d3fff4e-6969-4776-9b73-207471df6a85.png)


Untuk output validasi dapat dilihat pada gambar di bawah ini.

![image](https://user-images.githubusercontent.com/114905113/196594497-c7608af8-c6ea-4f42-bafc-b95d0b3a937e.png)

 
Pada gambar di atas, ditunjukkan bahwa bila user menginputkan nilai selain angka atau bilangan, maka akan muncul peringatan berupa kalimat “INPUT HANYA BERUPA ANGKA, MOHON INPUT ULANG!”. Setelah, itu user diminta untuk menginputkan ulang angka di bawahnya.

![image](https://user-images.githubusercontent.com/114905113/196594524-d27ea168-0e27-4c98-b9ce-c28fdf11097d.png)


 
Gambar di atas menunjukkan inputan ulang dari user. Bila user berhasil menginputkan ulang nilai berupa angka atau bilangan, program akan memproses oeprasi bilangan dan menampilkan output hasil dari operasi tersebut. 
 
 ![image](https://user-images.githubusercontent.com/114905113/196594558-9ad9f9f9-49aa-4641-aa0c-b12cfc540520.png)

Bila user terus melakukan kesalahan input nilai, maka program akan melakukan looping dengan mengulang peringatan kesalahan input sampai user benar benar menginputkan nilai berupa angka atau  bilangan.

f.	Opsi Mengulang 
Ketika program sudah selesai menampilkan output hasil, akan muncul pilihan yaitu “Apa ingin mengulang? (Y/T)”. Opsi ini memungkinkan user untuk mengulang atau keluar dari program. Ketika user menginputkan Y atau y, program akan kembali ke tampilan menu, dan user bisa mengulang memilih menu operasi bilangan lainnya. Sebaliknya, jika user menginputkan T atau t, program akan menampilkan output “TEKAN ENTER UNTUK KELUAR DARI PROGRAM”.

![image](https://user-images.githubusercontent.com/114905113/196594576-76f666ba-2e3a-49cb-ba96-86b60d781532.png)

 
Gambar di atas merupakan tampilan jika user menginputkan T atau t pada opsi mengulang. Bisa dilihat bahwa terdapat instruksi untuk menekan tombol enter 1 kali untuk keluar dari program. 

