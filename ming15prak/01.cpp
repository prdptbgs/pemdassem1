/*
    buatlah program untuk menentukan apakah sebuah bulangan integer merupakan bilangan ganjil atau genap.
    untuk pengecekan ganjil atau genap dilakukan pada fungsi tertentu dimana fungsi akan mengembalikan 
    nilai 1 jika argumen yang diberikan adalah bilangan ganjil dan mengembalikan nilai 0 jika argumen 
    yang diberikan adalah bilangan genap. cetak genap gnajil dilakukan di main().

*/

// Answer 
#include <iostream>
using namespace std;
int ganjilgenap(int x){
    if ( x%2 == 0){
        return 0;
    }else {
        return 1;
    }
}
int main() {
    int a;
    cout << "masukkan nilai : ";
    cin >> a;
    if (ganjilgenap(a) == 0)
    cout << "Genap";
    else
    cout << "Ganjil";
}
