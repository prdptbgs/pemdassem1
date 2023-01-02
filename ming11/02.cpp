/*
    seseorang mengendarai sepeda motor dengan pola kecepatan sebagai berikut : pada 10 detik pertama (detik ke 
    1 sampai dengan detik ke 10) kecepatannya tetap 3m/detik. pada 10 detik berikutnya (detik ke 11 sampai ke 20)
    kecepatannya berubah menjadi kecepatan tetap 4m/detik. demikian seterusnya setiap 10 detik berikutnya kecepatanny 
    bertambah 1m/detik dibandingkan 10 detik sebelumnya. susun program untuk mencetak berapa detik yang ia perlukan 
    untuk mencapai jarak 100 m (n diinputkan)

*/

// Answer
#include<iostream>
using namespace std;
int main (){
    int kecepatan = 0, jarak,sisajarak,count=0,count1 =0;
    bool tombol = true;
    cout << "input jarak : ";
    cin >> jarak;
    sisajarak = jarak;
if (tombol == true){
    for (int i = 1; i <= jarak; i++){
        if (i <= 10){
            kecepatan = 3;
            sisajarak -= kecepatan;// 70 
            count++;// 10
            if (sisajarak == 0){
                tombol = false ;
            }
            }
            if( i > 10 && i >= 20){
                kecepatan = 4;
                sisajarak -= kecepatan;
                count++;//20
                if (sisajarak == 0){
                    tombol = false ;
                }
            }
            if (i > 20 && i <= 30){
                kecepatan = 5;
                sisajarak -= kecepatan;
                count++;//26
                if (sisajarak == 0){
                    tombol = false ;
                }
            }
        }
}
       cout << sisajarak << endl;
       cout << count;
    }
    