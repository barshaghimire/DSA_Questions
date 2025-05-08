// DESCRIPTION OF THE QUESTION

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

vector<int>Twosum(vector<int>nums,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int complement = target - nums[i];
        if(mp.find(complement)!=mp.end()){
            return {mp[complement],i};
            }
            return {};
    }
}