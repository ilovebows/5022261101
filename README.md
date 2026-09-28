# 5022261101
Tugas asistensi dasprog (Raditya Arya Putra Pratama)

Penjelasan Alur code Mini Project :
Penerimaan Input Terminal (3 Input):Program meminta masukan pengguna berupa Nama (nama), Minuman/Makanan Favorit (fav_drink), dan Umur (umur) menggunakan fungsi scanf. 

Lalu penggunaan format  %[^\n]s diterapkan agar program dapat membaca masukan teks yang mengandung spasi.   Ekstraksi Karakter & Pengukuran String Manual:Inisial nama diambil langsung dari indeks pertama array (nama[0]).   Untuk mendapatkan huruf akhiran nama tanpa pustaka <string.h>, program melakukan perulangan while hingga menemukan null terminator ('\0') guna menghitung total panjang string nama, lalu mengambil karakter pada indeks [panjang - 1].   

Operasi Aritmatika & Pengolahan ASCII:Program melakukan dua operasi perhitungan sesuai kriteria:   Operasi 1: Pengurangan konstanta dengan umur (1000 - umur).   Operasi 2: Penjumlahan kode ASCII huruf depan minuman favorit versi kapital (M) dan versi huruf kecilnya (m).  

Konkatenasi String (sprintf):Seluruh komponen (inisial nama + hasil operasi 1 + umur + hasil operasi 2 + akhiran nama) digabungkan menjadi satu string ID berformat huruf-angka sepanjang minimal 10 karakter menggunakan fungsi sprintf().   Display Output:Terakhir, program menampilkan ID unik yang berhasil dibentuk beserta data nama dan makanan favorit ke layar terminal dalam bingkai format yang rapi menggunakan printf.

Lampiran kodenya saat dirun :
<img width="1002" height="877" alt="image" src="https://github.com/user-attachments/assets/10368919-012e-44f3-b852-f64592d019ed" />

