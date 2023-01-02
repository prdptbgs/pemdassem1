/*
NIM GENAP :
    buat program untuk menyelesaikan masalah berikut : 
    program akan menerima masukan berupa kode,jenis dan harga. jenis adalah "A",
    "B",dan "C". untuk setiap jenis, masing-masing akan diberikan diskon sebesar 
    10% untuk A,
    15% untuk B,
    dan 20% untuk C.
    program akan menghitung berapa harga setelah didiskon .

    contoh masukan :
    kode = 10 
    jenis = B
    harga = 10000

    contoh keluaran 
    jenis barang B mendapat diskon = 15%,harga setelah diskon = 8500
*/

// Answer 
#include<iostream>
using namespace std;
int main (){
 float kode,hargaasli=0,harga=0,diskon;
 char jenis;

 cout << "kode : ";
 cin >> kode;
 cout << "jenis : ";
 cin >> jenis;
 cout << "harga : ";
 cin >> hargaasli;

 if (jenis == 'a'){
    diskon = (10 * hargaasli)/100;
    harga = hargaasli - diskon;
 }
 else if(jenis == 'b'){
    harga = (15 * hargaasli)/100;
    harga = hargaasli - diskon;
 }
 else if(jenis == 'c'){
    harga = (20 * hargaasli)/ 100;
    harga = hargaasli - diskon;
 }

 cout << "jenis barang " << jenis;
 cout <<" mendapat diskon ";
 if (jenis == 'a'){
    cout << "10%";
 }else if (jenis == 'b'){
    cout << "15%";
 }else if (jenis == 'c'){
    cout << "20%";
 }
 cout << ",harga setelah didiskon = ";
 if (jenis == 'a'){
    diskon = (10 * hargaasli)/100;
    harga = hargaasli - diskon;
    cout << harga;
 }
 else if(jenis == 'b'){
    diskon = (15 * hargaasli)/100;
    harga = hargaasli - diskon;
    cout << harga;
 }
 else if(jenis == 'c'){
    diskon = (20 * hargaasli)/ 100;
    harga = hargaasli - diskon;
    cout << harga;
 };

}

