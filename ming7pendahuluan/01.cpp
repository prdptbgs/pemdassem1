//apakah kesalahan dari program berikut? perbaikilah sehingga program dapat dijalankan. apakah hasilnya ?

/*#include<iostream>
using namespace std;
int main (){
    int a,b;
    bool found;
    cout << "enter two integers : ";
    cin >> a >> b;
    if a > a*b && 10 < b;
    found = 2*a < b;
    if found
    a = 3;
    c = 15;
    if b 
    {
        b =0;
        a =1;
    }
}*/


// jawaban 

#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    bool found;
    cout << "enter two integers : ";
    cin >> a >> b;
    if (a > a*b && 10 < b)
    found = 2*a<b;
    if (found)
    a = 3;
    c = 15;
    if (b) 
    {
        b =0;
        a =1;
    }
    cout << found;
}