class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          unordered_set<int> s1(nums1.begin(),nums1.end()); 
          unordered_set<int> s2; 
          for(int x:nums2){
            if(s1.count(x)) s2.insert(x);
          }
          return vector<int>(s2.begin(),s2.end());
    }
};
