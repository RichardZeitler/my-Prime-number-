#include <iostream>
//#include <cmath>
using namespace std;
 
int main(){
    int input = 7;
    int div = 2;
    int result = 0;
    int counter = 0;
    
    cin >> input;

    while( div < input ){
        result = input % div;
        //cout << "c ist: " << result << endl;
        if( result == 0 ){
            counter++;
            //cout << "anzahl der nullen:" << counter << endl;
        }
        div++;
    }//end while
    if( counter == 0 ){
        cout << input << " ist eine Primzahl:" << endl; 
    }
    if( counter != 0 ){
        cout << input << " ist keine Primzahl" << endl;
    }
    return 0;
}

//https://www.tutorialspoint.com/cplusplus/cpp_constants_literals.htm
//compiler g++
//trello
