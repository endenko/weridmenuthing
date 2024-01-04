#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int tongdiem(){
	int n;
    cin>>n;
    vector<int>team1(n);
    vector<int>team2(n);
    for (int i=0;i<n;i++) {
        cin>>team1[i];
    }
    for (int i=0;i<n;i++) {
        cin>>team2[i];
    }
    sort(team1.begin(), team1.end());
    sort(team2.begin(), team2.end());
	int max = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (j == n) break;
        while (j < n) {
            if (team2[j] > team1[i]) {
                max++;
                break;
            }
            else {
                j++;
            }
        }
    }
    return max;
} 
int main() {
    cout<<tongdiem();
}

