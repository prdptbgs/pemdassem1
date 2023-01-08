/*
    buatlah program dengan fungsi untuk menghitung frekuensi kemunculan huruf dalam sebuah kalimat1
    huruf yang dicari frekuensinya dan kalimat diinputkan 
    ( misal : int hitung_frek(stringinput,huruf) )
    
*/

// Answer 
// kekurangan nya tidak bisa input kalimat yang ada spasinya
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


//pakai ini bisa input kalimat yang ada spasinya 
/*
#include<iostream>
#include<string>
using namespace std;

int carihuruf (string b, char c){
    int count = 0;
    for(int i = 0; i < b.length(); i++){
        if (b[i]==c){
            count++;
        }
    }
    return count;
}

int main (){

   string kalimat;
   char cari;
   cout << "masukkan kalimat : ";
   getline(cin,kalimat);
   cout << "masukkan huruf yang ingin dicari : ";
   cin >> cari;

   cout << "huruf dalam kalimat tersebut ada : " << carihuruf(kalimat,cari); 
}
*/
