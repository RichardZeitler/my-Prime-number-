
#include <iostream>
//#include <cmath>
using namespace std;
 
int main(){
    int upper = 18;
    int lower = 7;
    int div = 2;
    int result = 0;
    int counter = 0;

    cout << "upper limit:";
    cin >> upper;    
    cout << "lower limit:";
    cin >> lower;
    
    //cout << "test" << endl;

    for( int i = lower; i < upper; i++ ){

        //cout << i << endl;

        while( div < i ){

            result = i % div;
             //cout << "c ist: " << result << endl;

            if( result == 0 ){
                counter++;
                //cout << "anzahl der nullen:" << counter << endl;
            }           
            div++;
            
                
        }//end while

        if( counter == 0 ){
        cout << i << " ist eine Primzahl:" << endl; 
        }

        if( counter != 0 ){
        cout << i << " ist keine Primzahl:" << endl;
        }

        counter = 0;
        div = 2;
        
        
    }
    return 0;
}