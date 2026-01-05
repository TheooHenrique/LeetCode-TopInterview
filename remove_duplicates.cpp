#include <vector>
using namespace std;

class Solution {
public:
int removeDuplicates(vector<int>& nums) {
    int k{0};
    if (nums.size() > 0) {
        int tmp = nums[0];
        for (int i{0}; i < nums.size(); ++i){
            if (nums[i] != tmp){
                ++k;
                nums[k] = nums[i];
                tmp = nums[i];
            }
            
        }
        k++;
    }
    return k;
}
};