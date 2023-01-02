/*
seseorang menyimpan uang di Rp 1.000.000 di bank dengan bunga berbunga 2% perbulan .
jadi setelah satu bulan uangnnya menjadi Rp 1.020.000. satu bulan berikutnya uang 
Rp 1.020.000 ini mendapat bunga lagi 2%, yaitu Rp 20.400 = Rp 1.040.400. demikian 
seterusnya (bunga bulan ini ditambahkan ke saldo uangnya dan mendapatkan bunga lagi 
pada bulan berikutnya ). susun program untuk menghitung dan mencetak jumlah uangnya 
setelah n bulan (n diinputkan).
*/

// Answer 
#include<iostream>
using namespace std;
int main (){
    int n, totaluang = 1000000;

    cout << "masukkan jumlah bulan : ";
    cin >> n;

    for (int i = 0; i<= n; i++){
        totaluang  = totaluang + ((totaluang*2)/100);
    }

    cout << "total uang selama " << n << " bulan adalah = Rp " << totaluang;
}