#include <iostream>
#include <sstream>
#include <string>
using namespace std;

 
int main() {
   string str;
   getline(cin,str); 
   stringstream ss(str);
   string word;
   int tmp=0;
   string kq; 
    while (ss >> word) {
       if(tmp<word.length()) {
       	 tmp=word.length(); 
       	 kq=word; 
	   }
    }
    cout<<kq; 

    return 0;
}

