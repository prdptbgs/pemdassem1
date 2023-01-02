/*rubahlah program berikut menjadi bentuk while loop :

int main (){
    int counter,sum,n;
    cout << "enter the number of positive integers : ";
    cin >> n;
    sum = 0;
    for(counter = 1; counter <= n; counter++){
        sum = sum + counter;
    }
    cout << "the sum of the first " << n << "positive integers is " << sum << endl;
    return 0;
}
*/

// Answer 
#include<iostream>
using namespace std;
int main (){
    int counter,sum,n;
    cout << "enter the number of positive integers : ";
    cin >> n;
    sum = 0;
    counter = 1;
    while(counter <= n){
        sum += counter ;
        counter++;
    }
    cout << "the sum of the first " << n << " positive integers is " << sum << endl;
    return 0;
}

