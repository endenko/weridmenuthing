#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool tryzero(vector<int>& nums) {
        int even_count = 0;
        int odd_count = 0;
        for (int num : nums) {
            if (num % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            if (even_count >= 2 || (even_count >= 1 && odd_count >= 1)) {
                return true;
            }
        }

        return false;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution solution;
    bool result = solution.tryzero(nums);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}

