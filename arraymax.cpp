#include <iostream>
#include <vector>
using namespace std; 
int main() {
    int m,k;
    cin>>m>>k;
	vector<int> A(m);
    for (int i=0;i<m;i++) {
        cin>>A[i];
    }
    int timk= -1;
    for (int i=0;i<m;i++){
        if (A[i]==k){
            timk=i+1;
            break;
        }
    }
    if (timk!= -1) {
        cout <<"CO K O VI TRI "<<timk<<endl;
    } else {
        cout<<"KHONG CO K"<<endl;
    }
}
