#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    int Zahl = 7;
    int Div = 2;
    int Result = 0;
    int counter = 0;
    
    cin >> zahl;

    while( Div < Zahl ){
        Result = Zahl % Div;
        //cout << "c ist: " << Result << endl;
        

        if (Result != 0 ) {
            //cout << Result << endl;    
        }
        if (Result == 0) {
            counter++;
            //cout << "anzahl der nullen:" << counter << endl;
        }
        Div++;
    }
          if(counter == 0){

            cout << Zahl << " ist eine Primzahl:"<< endl; 

           }
           if (counter != 0){

               cout << Zahl << " ist keine Primzahl" << endl;
           }

    
             
             return 0;
}
