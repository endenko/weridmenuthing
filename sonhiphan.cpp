#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool tryzero(vector<int>& nums) {
        bool Zero = false;
        for (int num : nums) {
            if ((num & 1) == 0) {
                Zero = true;
                break;
            }
        }
        return Zero;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    Solution solution;
    bool result = solution.tryzero(nums);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}

