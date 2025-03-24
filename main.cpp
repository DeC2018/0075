#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = nums.size() - 1;

        while (one <= two) {
            if (nums[one] == 0) {
                swap(nums[zero++], nums[one++]);
            } else if (nums[one] == 1) {
                one++;
            } else {
                swap(nums[one], nums[two--]);
            }
        }
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    cout << "Input: nums = [2,0,2,1,1,0]" << endl;
    solution.sortColors(nums1);
    cout << "Output: [";
    for (int i = 0; i < nums1.size(); ++i) {
        cout << nums1[i];
        if (i < nums1.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    vector<int> nums2 = {2, 0, 1};
    cout << "Input: nums = [2,0,1]" << endl;
    solution.sortColors(nums2);
    cout << "Output: [";
    for (int i = 0; i < nums2.size(); ++i) {
        cout << nums2[i];
        if (i < nums2.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
