/*
Problem Statement:-Next Permutation (Given an array of integers nums, find the next permutation of nums.)

Time Complexity: O(nlogn) (Worst case)
Space Complexity: O(1) (in-place)

Approach:-
1)Check if given array is sorted in decreasing order,if it is we only need to sort the array and return it.
2)Otherwise start a loop from right side(n-2 to 0). 
3)Check when we get any element which is smaller than to its next adjacent element,store that index in any variable(let s) and break from the loop.
4)Again start loop from n-1 to s(index stored in previous step) and check for an element where element is greater than value at index s.
5)swap both element and break the loop.
6)lastly,reverse the array from index (s+1) to n-1.
*/



class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // check for sorted array in descending order
        if(is_sorted(nums.begin(),nums.end(),greater<int>()))
        {
            sort(nums.begin(),nums.end());
            return;
        }
        
        
        
        int n=nums.size();
        int s,d;
 
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
             s=i;
             break;
            }
        }

        for(int i=n-1;i>=s;i--)
        {
           if(nums[i]>nums[s])
           {
               
               swap(nums[i],nums[s]);
               break;
           }

        }
         
         
      reverse(nums.begin()+(s+1),nums.end());
       return;
     

       

       

          
        
    }
};
