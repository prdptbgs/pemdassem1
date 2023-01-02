/*
int main(){
    int testscore;
    cout << "enter the test score : ";
    cin >> testscore;
    cout << endl;
    switch(testscore/10){
        case 0 :
        case 1 : 
        case 2 : 
        case 3 :   
        case 4 :
        case 5 : cout  << "the grade is f " << endl;
        case 6 : cout << "the grade is d " << endl;
        case 7 : cout << "the grade is c " << endl;
        case 8 : cout << "the grade is b " << endl;
        case 9 : 
        case 10 : cout << "the grade is a " << endl;
        default : cout << "invalid test score." << endl;

    }
    return 0;
}
*/

/*
    pada program ini jika dijalankan :
    1.enter invalid test score :
        invalid test score.
    2.enter the test score : 
        invalid test score.
    3,enter the test score : 
        the grade is c 
        the grade is b
        the grade is a 
        invalid test score 

    dari ketiga hasil running program untuk input 1 sampai 100 memberikan hasil yang benar 
    tetapi untuk input 1 sampai 100 hasilnya salah, untuk input 75 harusnya tercetak the grade is c
    apakah kesalahan dari program tersebut ? cobalah perbaiki sehingga mendapatkan hasil yang benar 
*/

// answer
#include<iostream>
using namespace std;
int main(){
    int testscore;
    cout << "enter the test score : ";
    cin >> testscore;
    cout << endl;
    switch(testscore/10){
        case 0 : 
        case 1 : 
        case 2 : 
        case 3 :   
        case 4 :
        case 5 : cout  << "the grade is f " << endl;
        break;
        case 6 : cout << "the grade is d " << endl;
        break;
        case 7 : cout << "the grade is c " << endl;
        break;
        case 8 : cout << "the grade is b " << endl;
        break;
        case 9 : cout << "the grade is a " <<endl; 
        break ;
        case 10 : cout << "the grade is a+ " << endl;
        break;
        default : cout << "invalid test score." << endl;

    }
    return 0;
}

