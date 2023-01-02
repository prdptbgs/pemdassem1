/*
    buat program pemilihan kepala desa, program digunakan untuk memasukkan nama calon dan jumlah perolehan 
    suara setiap calon. output dari program adalah nama calon, perolehan suara setiap calon,selain itu 
    program juga harus bisa memberikan hasil siapa pemenang pemilihan kepala desa berdasarkan perolehan 
    suara terbanyak.

    jumlah kandidat  5 

    contoh output :

    kandidat    jumlah pemilih      presentase 
    johnson     5000                25.91
    miller      4000                20.73
    duffy       6000                31.09
    robinson    2500                12.95
    ashtony     1800                9.33
    pemenang adalah duffy 


*/

// Answer 
#include<iostream>
#include<string.h>//agar fungsi strcpy dpt digunakan 
using namespace std;
int main(){
char kandidat[5][100];//utk inisialisasi 5 kandidat 
int jumlah_pemilih[5];//utk menampung banyaknya pemilih untuk setiap kandidat
float presentase[5];//utk menyimpan nilai presentase tiap kandidat
int kandidat_pemenang = 0;//utk menyimpan kandidat agar nanti bisa menampilkan nama pemenang diakhir 
float tot_jumlahpemilih= 0;//utk perhitungan membuat persentase 

//untuk memasukkan 5 nama kandidat 
for (int i = 0; i < 5; i++){
    cout << "masukkan nama kandidat ke " << i << " : ";
   cin >> kandidat[i];
}
//untuk input banyaknya jummlah suara setiap kandidat
for ( int i = 0; i< 5; i++){
    cout << "jumlah suara setiap pemilih kandidat ke " << i << " : ";
    cin >> jumlah_pemilih[i];
    tot_jumlahpemilih +=jumlah_pemilih[i];//jumlah pemilih akan ditambahkan semua ke tot_jumlahpemilih agar nantinya bisa dijadikan nilai dalam bentuk persen 
}
//untuk spasi antara input dan output biar rapi ajasih 
cout << "\n\n\n";

//untuk membuat nilai dalam persen untuk setiap kandidat dan disimpan didlm array 
presentase[0]= (jumlah_pemilih[0]/tot_jumlahpemilih) * 100;
presentase[1]= (jumlah_pemilih[1]/tot_jumlahpemilih) * 100;
presentase[2]= (jumlah_pemilih[2]/tot_jumlahpemilih) * 100;
presentase[3]= (jumlah_pemilih[3]/tot_jumlahpemilih) * 100;
presentase[4]= (jumlah_pemilih[4]/tot_jumlahpemilih) * 100;

//untuk menentukan jumlah pemilih paling banyak pada setiap kandidat,lalu kandidat dengan jumlah pemilih terbanyak akan jadi pemenang dan akan ditampilkan diakhir program  
for ( int i = 0; i < 5; i++){
    if(jumlah_pemilih[i] > kandidat_pemenang){
        kandidat_pemenang = jumlah_pemilih[i];}
    }
    
    //menampilkan output kandidat,jumlah pemilih dan presentase di bagian paling atas output program nantinya 
    cout << "kandidat" << "  " << "jumlah pemilih" << "  " <<  "presentase\n";
    
    //untuk menampilkan nama kandidat,banyaknya jumlah pemilih,dan nilai presentase menggunakan perulangan for 
    for(int i = 0; i<5; i++){
        cout << kandidat[i] << "      " << jumlah_pemilih[i] << "     " << presentase[i] << endl;
    }
    //untuk mensortir nama pemenang 
    char menang[100];
    for ( int i =0; i < 5; i++){
        if (kandidat_pemenang == jumlah_pemilih[i]){
           strcpy(menang, kandidat[i]);
        }
    }
    
    //menampilkan pemenang 
    cout << "pemenangnya adalah " << menang;
}