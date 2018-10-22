
#include <iostream>
//#include <cmath>
using namespace std;
 
int main(){
    int upper = 0;                                                 // obere grenze
    int lower = 0;                                                  // untere grenze
    int div = 2;                                                    // durch diese zahl wird dividiert
    int result = 0;                                                 // der modulo wert (division mit rest)
    int counter = 0;                                                // variable die die nullen bei der modulo rechnung zählt

    cout << "untere grenze :";                                         // gibt dem user die nachicht "upper limit"
    cin >> lower;                                                   // der user input wird als "upper" variable deffiniert   
    cout << "obere grenze:";                                         // giebt dem uer die nachicht "lower limit"
    cin >> upper;                                                   // der userinput wird als "lower" deffiniert
    //cout << "test" << endl;
 
    for( int i = lower; i < upper; i++ ){                           /*Zählen von der unterren grenze bis zur oberen grenze ( for muss haben!!!!)
        //cout << i << endl;                                   1. stelle neue variable 2. stelle laufbedingung 3.stelle was am ende ausgefürt werden soll*/
        while( div < i ){                                           // schleife die läuft wenn der divident kleiner als die unterre grenze ist 
            result = i % div;                                       // ergebniss
             //cout << "c ist: " << result << endl;
            if( result == 0 ){
                counter++;
                //cout << "anzahl der nullen:" << counter << endl;
            }           
            div++;
        }//end while

        if( counter == 0 ){
        cout << i <<";";                  //schaut ob die eigenschaften einer primzahl erfüllt sind
        }
        /*if( counter != 0 ){                                          //
        cout << i << " ist keine Primzahl:" << endl;
        }*/
        counter = 0;
        div = 2;
    }
    return 0;
}