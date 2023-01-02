/*
    buat program rapor siswa, dimana pada rapor setiap siswa terdapat daftar nilai semua pelajaran 
    dan nilai rata-rata kelas setiap pelajaran, jumlah mata pelajaran 5 dan inputkan jumlah siswa
    dan nama dari setiap siswa(tampilan bebas)

    contoh,jika data siswa : 
        siswa               nilai pelajaran 
                            1   2   3   4   5
        elizabeth           80  70  90  100 60
        charles             70  60  70  80  90

    maka output : 
    rapor siswa :       elizabeth                      rapor siswa :  charles 
    pelajaran 1 : 80  rata-rata kelas : 75              pelajaran 1 : 70    rata-rata kelas : 75
    pelajaran 2 : 70  rata-rata kelas : 65              pelajaran 2 : 60    rata-rata kelas : 65
    pelajaran 3 : 80  rata-rata kelas : 80              pelajaran 3 : 70    rata-rata kelas : 80
    pelajaran 4 : 90  rata-rata kelas : 90              pelajaran 4 : 80    rata-rata kelas : 90
    pelajaran 5 : 60  rata-rata kelas : 75              pelajaran 5 : 90    rata-rata kelas : 75

*/

// Answer 
#include<iostream>
#include<string>
using namespace std;
int main (){
    int sum,pelajaran = 5;
    float total1=0,total2=0,total3=0,total4=0,total5=0;
    float ratapel[5];//variabel untuk rata rata pelajaran

    //memasukkan jumlah siswa
    cout << "masukkan jumlah siswa : ";
    cin >> sum;

    //menginisialisasi nilai array 
    int jumlahsiswa[sum]; 
    int nilaisiswa[sum][pelajaran];
    string namasiswa[sum];

    for (int i = 0; i < sum; i++){//memasukkan nama siswa sesuai jumlah siswa
        cout << "masukkan nama siswa : ";
        cin >> namasiswa[i];
        for( int j = 0; j < pelajaran; j++){//memasukkan nilai 5 mata pelajaran per siswa 
            cout << "masukkan nilai " << namasiswa[i] << " nilai pelajaran " << j+1 << " : ";
            cin >> nilaisiswa[i][j];
        }
    }
    //menghitung total nilai per pelajaran semua siswa
    for(int i = 0; i < sum; i++){//nilai pelajaran 1
       total1 += nilaisiswa[i][0]; 
    }
    for(int i = 0; i < sum; i++){//nilai pelajaran 2
        total2 += nilaisiswa[i][1];
    }
    for(int i = 0; i < sum; i++){//nilai pelajaran 3
        total3 += nilaisiswa[i][2];
    }
    for(int i = 0; i < sum; i++){//nilai pelajaran 4
        total4 += nilaisiswa[i][3];
    }
    for(int i = 0; i < sum; i++){//nilai pelajaran 5
        total5 += nilaisiswa[i][4];
    }
    //membuat nilai rata rata 
    total1 /=sum;//rata rata pelajaran 1
    total2 /=sum;//rata rata pelajaran 2
    total3 /=sum;//rata rata pelajaran 3
    total4 /=sum;//rata rata pelajaran 4
    total5 /=sum;//rata rata pelajaran 5

    //memindahkan nilai total setiap mata pelajaran ke dalam array 
   ratapel[0]= total1;
   ratapel[1] = total2;
   ratapel[2] = total3;
   ratapel[3] = total4;
   ratapel[4] = total5;
    //mengeluarkan namasiswa,nilaisiswa,ratarata per kelas
    for ( int i = 0; i < sum; i++){
        cout << "raport siswa : " << namasiswa[i] << "\n";
        for(int j = 0; j < pelajaran; j++){
            cout << "pelajaran " << j + 1 << " : "<< nilaisiswa[i][j] << " " << "rata rata kelas : " << ratapel[j] << endl;
        }
        cout << endl;
    }
}