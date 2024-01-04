#include <iostream>
#include <cctype>
using namespace std; 
char program_3(char x){
    if (isalpha(x)) {
        if (islower(x)){
            return x=='z'?'a':x+1;
        } else if (isupper(x)) {
            return x=='Z'?'A':x+1;
        }
    } else if (isdigit(x)) {
        return x=='9'?'0':x+1;
    }
    return x;
}
int main() {
    char ch;
    cin>>ch;
    char result=program_3(ch);
    cout<<result<<endl;
}

