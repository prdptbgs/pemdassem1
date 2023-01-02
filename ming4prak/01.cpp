// buatlah program c++ untuk menghitung nilai akhir seorang mahasiswa. rumus akhir adalah sebagai berikut 
// nilai akhir = 0.2*partisipasi+0.3*tugas+0.2*uts+0.3*uas
// nilai partisipasi,uts dan uas diinputkan.tentukan tipe variable yang sesuai untuk setiap variable 

#include<iostream>
using namespace std;
int main (){
    float nilaiakhir,partisipasi,tugas,uts,uas;//inisialisasi tipe data 

    cout << "masukkan partisipasi : ";//menginput data dari user 
    cin >> partisipasi;
    cout << "masukkan tugas : ";
    cin >> tugas;
    cout << "masukkan uts : ";
    cin >> uts;
    cout << "masukkan uas : ";
    cin >> uas;

    // rumus yg diberikan 
    nilaiakhir = (0.2*partisipasi)+(0.3*tugas)+(0.2*uts)+(0.3*uas);

    //menampilkan hasil 
    cout << "nilai akhirnya adalah : " << nilaiakhir;
}