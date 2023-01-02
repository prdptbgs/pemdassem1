/*
    untuk memudahkan pencarian data barang,toko surya ingin memberi kode pada setiap barang yang dijual.
    kode barang terdiri dari 3 karakter, setiap kode barang diinputkan pada komputer, maka nama barang beserta 
    harganya akan muncul. bantulah toko surya untuk membuat programnya.
*/

// Answer 
#include<iostream>
#include<string.h>
using namespace std;
int main (){
    char kode[3];
    
    cout << "masukkan kode barang : ";
    cin >> kode;

    if (strcmp(kode,"psl")== 0){
            cout << "pensil" << endl;
            cout << "harga : 1500" << endl;
    }else if (strcmp(kode,"grs")== 0){
            cout << "penggaris" << endl;
            cout << "harga : 2500" << endl;
    }else if (strcmp(kode,"bku")== 0){
            cout << "buku" << endl;
            cout << "harga : 3000" << endl;
    }
}
