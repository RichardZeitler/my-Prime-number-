#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void convert(string& s) {
    for (int i =0; i<s.length();i++){
        s[i] = toupper (s[i]);
    }

}
int main(){

std:: string s = "HELLO WORLD";
cout<<"Enter a string"<<endl;
getline(cin, s);
convert(s);
cout<<s <<endl;
std:: cout << s.size() << '\n';

return 0;
}