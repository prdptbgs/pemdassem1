/*
NIM GANJIL : 
    buat program untuk menentukan lama bekerja seorang pegawai,jika jam masuk dan jam pulang diinput. 
    catatan : jam berupa angka 1 - 12 ,dan seorag pegawai bekerja kurang dari 12 jam.

    contoh keluaran  : 
    jam masuk           jam keluar          keluaran/tampilan 
    10                  11                  lama bekerja 1 jam 
    10                  2                   lama bekerja 4 jam 
    10                  7                   lama bekerja 9 jam 

*/

// Answer 
#include<iostream>
using namespace std;
int main (){
    int jam_masuk,jam_pulang;
    int lama_bekerja = 0;

    cout << "input jam masuk : ";
    cin >> jam_masuk;
    cout << "input jam pulang : ";
    cin >> jam_pulang;

    if (jam_pulang < jam_masuk ){
            lama_bekerja = ( 12 - jam_masuk )+jam_pulang;
    }else {
            lama_bekerja = jam_pulang - jam_masuk;
    }

    cout << "lama bekerja " << lama_bekerja << " jam ";
}