class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        while (i < n){
            nums1.pop_back();
            i++;
        }
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());  
       
        //nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
    }
};
