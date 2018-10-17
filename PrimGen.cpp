#include<iostream>
#include<cmath>
using namespace std;
 
int main(){
    int zahl = 7;
    int Div = 2;
    int Result = 0;
    int counter = 0;
    int Startwert = 1;
    
    cin >> zahl;
     
    while( Startwert != zahl){




        while( Div < Startwert ){
              Result = Startwert % Div; // Überprüfung der zahl auf teilbarkeit
               //cout << "c ist: " << Result << endl;
        

                /*if (Result != 0 ) {
                //cout << Result << endl;    
                }*/
            if (Result == 0) {
                counter++;
                //cout << "anzahl der nullen:" << counter << endl;
            }
                 Div++;
         }  

         if(counter == 0){

               cout <<  << " ist eine Primzahl:"<< endl; // bestätig ob es eine primzahl ist 

             }


            if (counter != 0){

               cout << result << " ist keine Primzahl" << endl;// Dienied
             }
      
        Startwert++;

     }     
          

    
             
             return 0;
}
