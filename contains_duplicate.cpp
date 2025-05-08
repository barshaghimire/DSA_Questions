// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

bool containsDuplicate(vector<int>& nums){
    // first way;
    // unordered_set<int>st;
    // for(int i=0;i<nums.size();i++){
    //     if(st.find(nums[i])!=st.end()){
    //         return true;
    //     }
    //     else{
    //         st.insert(nums[i]);
    //     }
    // }
    // return false;


    unordered_map<int>st;
    for(int i=0;i<st.size();i++){
        st.insert(nums[i]);
    }
    return st.size()!=nums.size();
}