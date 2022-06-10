//Next Permutation


#include<bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int>& nums) {
    	int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                for (l = n - 1; l > k; l--) {
                    if (nums[l] > nums[k]) {
                        break;
                    }
                } 
                swap(nums[k], nums[l]);
                reverse(nums.begin() + k + 1, nums.end());
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	}
    }

int main()
{

}

