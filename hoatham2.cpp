#include <iostream>
#include <string>
using namespace std;
int main() {
    string S;
    cin>>S;
    int T;
    cin>>T;
    while (T--) {
        int k,x;
        cin>>k>>x;
        int n=S.length();
        int demchu[26] = {0};
        int sochu = 0;
        int z = 0;
        for (int i=0;i<k;i++) {
            int chu=S[i]-'a';
            if (demchu[chu]==0) {
                sochu++;
            }
            demchu[chu]++;
        }
        if (sochu==x) {
            z++;
        }
        for (int i=k; i<n;i++) {
            int chu=S[i-k]-'a';
            if (demchu[chu]==1) {
                sochu--;
            }
            demchu[chu]--;
            chu = S[i]-'a';
            if (demchu[chu]==0) {
                sochu++;
            }
            demchu[chu]++;
            if (sochu==x) {
                z++;
            }
        }
        cout<<z<<endl;
    }
}

