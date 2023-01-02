// perbaikilah program berikut sehingga memberikan hasil w = 21 

/*
#include<iostream>
using namespace std;

const int secret = 5
int main (){
    int x,y,w,z;
    z =9;
    if z > 10
    x = 12 ; y =5,w = x +y + secret;
    else 
    x =12; y = 4, w = x +y + secret;
    cout << " w = " << w << endl;
}
*/

//answer 

#include<iostream>
using namespace std;

const int secret = 5;
int main (){
    int x,y,w,z;
    z =9;

    if (z > 10){
        x = 12 ; 
        y =5;
        w = x + y + secret;
    }
    else{
        x =12;
        y = 4;
        w = x +y + secret;
    }

    cout << " w = " << w << endl;
}