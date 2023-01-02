/*
program dibawah ini seharusnya menjumlahkan sejumlah bilangan integer yang dimasukkan 
dan berhenti ketika bilangan yang dimasukkan salah adalah -1. kemudian menampilkan banyaknya
data yang dimasukkan kecuali -1dan hasil penjumlahan semua data tersebut kecuali -1.
perbaikilah program tersebut sehingga memberikan hasil yang benar. cobalah dengan 
memasukkan data 1 2 3 4 5 -1, jumlah data yang ditampilkan harusnnya 5 dan hasil penjumlahannya 
adalah 15. apakah hasilnya sudah benar ? 

int main (){
    int total =0,count =0,number;
    do{
        cin >> number;
        total = total + number;
        count++;
    }while{number != -1}
    cout << "the number of data read is " << count << endl;
    cout << "the sum of the numbers entered is " << total;
    return 0;
}
*/

//Answer 
#include<iostream>
using namespace std;
int main (){
    int total =0,count =0,number;
    do{
        cin >> number;
        if (number != -1){
        total = total + number;
        count++;
        }
    }
    while (number != -1);
    cout << "the number of data read is " << count << endl;
    cout << "the sum of the numbers entered is " << total;
    return 0;
}