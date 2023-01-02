/*
    tulislah sebuah program untuk menghitung jumlah luas dua bujursangkar. program minimal mempunyai dua fungsi 
    yaitu fungsi menghitung luas bujursangkar dan fungsi menjumlahkan dua luas bujursangkar.
    
*/

// Answer
#include <iostream>
using namespace std;
int luasbujursangkar(int x){
    return x*x;
}

int jumlah2luasbujursangkar(int x, int y){
    return x + y;
}
int main() {
    int sisi1,sisi2,luas1,luas2;
    cout << "masukkan panjang sisi bujursangkar pertama : ";
    cin >> sisi1;
    cout << "masukkan panjang sisi bujursangkar kedua : ";
    cin >> sisi2;
    luas1 = luasbujursangkar(sisi1);
    luas2 = luasbujursangkar(sisi2);
    cout << "luas bujursangkar pertama = " << luas1 << "\nluas bujursangkar kedua = " << luas2 << "\njumlah 2 luas bujursangkar = " << jumlah2luasbujursangkar(luas1,luas2);}
