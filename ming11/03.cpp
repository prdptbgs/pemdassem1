/*
    buatlah program untuk menerima daftar nilai mahasiswa sebagai berikut :
    input :     - jumlah data(n)
                    - nilai ke-1 s/d nilai ke-n

    output :    - nilai minimal 
                - nilai maximal 
                - nilai rata-rata    (rata-rata = nilai total/jumlah data)
        (petunjuk : perintah perulangan yang digunakan bebas)
*/

// Answer 
#include<iostream>
using namespace std;
int main(){
    int n;
    float min = 1000000,max = -1000000,average = 0;

    cout << "input berapa banyak nilai : ";
    cin >> n;
    int grade[n];

    for (int i = 0; i < n; i++){
        cout << "masukkan nilai " << i+1 << " : ";
        cin >> grade[i];
        average += grade[i];
    }
    average = average/n;
    for (int i = 0; i<n; i++){
        if (grade[i] > max){
            max = grade[i];
        }else if (grade[i] < min){
            min = grade[i];
        }
    }
    
    cout << "nilai maksimal = " << max << endl;
    cout << "nilai minimal = " << min << endl;
    cout << "nilai rata-rata = " << average;
}