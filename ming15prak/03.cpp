/*
    buatlah program dengan fungsi untuk menghitung frekuensi kemunculan huruf dalam sebuah kalimat1
    huruf yang dicari frekuensinya dan kalimat diinputkan 
    ( misal : int hitung_frek(stringinput,huruf) )
    
*/

// Answer 
 #include<iostream>
#include<string>
#include<string.h>
using namespace std;
int frekuensijumlah(string kali, char b){
     return (count(kali.begin(), kali.end(), b));
    
}
int main (){
    string bagas;
    char a;
    cout << "masukkan kalimat : ";
    cin >> bagas;
    cout << "masukkan kata yang ingin dicari : ";
    cin >> a;
    cout << frekuensijumlah(bagas,a);

}
