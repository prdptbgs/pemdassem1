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

//memakai fungsi di library bawaan string 
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string kalimat;
   char huruf;
   int cari = 0;

   cout << "input kalimat : ";
   getline(cin,kalimat);
  
   cout << "input huruf yg ingin di cari dan dihitung : ";
   cin >> huruf;

   cari = count(kalimat.begin(),kalimat.end(),huruf);
   cout << "huruf ada : " << cari;

}
*/

//mengunakan fungsi bawaan library string tapi dibuat menjadi fungsi
/*
#include<iostream>
#include<string>
using namespace std;
int carihuruf(string a, char b){ //fungsi yang didalamnya menggunakan fungsi dari library bawaan string
    return count(a.begin(),a.end(),b);
}
int main(){
   string kalimat;
   char n;
   char ulang;
   cout << "masukkan kalimat : ";
   getline(cin,kalimat);//jika string dimasukkan dalam perulangan maka perulangan akan berhenti(tdk tahu karena apa)

   while(true){ //perulangan tanpa batas menggunakan while loop,bisa juga dengan do while 
   cout << "masukkan huruf : ";
   cin >> n;

   cout << "jumlah kalimat adalah = " << carihuruf(kalimat,n) << endl;
   
   cout << "apakah ingin mengulang lagi (y/n) : ";
   cin >> ulang;
   if (ulang == 'n' || ulang == 'N'){ // kondisi jika pengguna menginput n atau N maka perulangan akan berhenti dengan menggunakan break
    break;
   }
   }
}
*/
