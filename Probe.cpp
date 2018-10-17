#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    int Input = 7;
    int Div = 2;
    int Result = 0;
    int counter = 0;
    
    cin >> Input;

    while( Div < Input ){
        Result = Input % Div;
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

            cout << Input << " ist eine Primzahl:"<< endl; 

           }
           if (counter != 0){

               cout << Input << " ist keine Primzahl" << endl;
           }

    
    return 0;
}
