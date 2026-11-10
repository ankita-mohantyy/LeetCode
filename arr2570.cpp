//Merge 2 2d arrays by summing values

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
       
        vector<vector<int>> res;
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();

        while (i<n && j<m){
            int id1=nums1[i][0], v1=nums1[i][1];
            int id2=nums2[j][0], v2=nums2[j][1];

            if(id1==id2){
                res.push_back({id1, v1+v2});
                i++;
                j++;
            }
            else if(id1<id2){
                res.push_back({id1, v1});
                i++;
            }
            else{
                res.push_back({id2, v2});
                j++;
            }

        }
        while (i < n) {
            res.push_back(nums1[i]);
            i++;
        }
        while (j < m) {
            res.push_back(nums2[j]);
            j++;
        }

        return res;  
    }
};

//not optimal solution, but i will fix it later
