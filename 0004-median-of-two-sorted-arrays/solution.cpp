class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = 0, n2 = 0;
        int n = nums1.size(), r = nums2.size();
        int k = (n + r) / 2;
        cout << k << " ";
        int c = -1;
        double curr = 0, prev = 0;
        while (n1 < n && n2 < r) {
            if (nums1[n1] < nums2[n2]) {
                prev = curr;
                curr = nums1[n1++];
            } else {
                prev = curr;
                curr = nums2[n2++];
            }
            c++;
            if (c == k)
                break;
        }
        while (c < k && n1 < n) {
            prev = curr;
            curr = nums1[n1++];
            c++;
        }

        while (c < k && n2 < r) {
            prev = curr;
            curr = nums2[n2++];
            c++;
        }
        if ((n + r) % 2 == 0)
            return (prev + curr) / 2.0;
        else
            return curr;
    }
};
