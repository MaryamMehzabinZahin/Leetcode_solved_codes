class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        vector<int> result;
        for(int i=0; i<nums2.size(); i++)
        {
            umap[nums2[i]]=i;
        }
        for(int i=0; i<nums1.size(); i++)
        {
           for(int m=0; m<nums2.size(); m++ )
           {
                if(nums1[i]==nums2[m])
                {
                int flag=0;
                int start=m;
                for(int j=start+1; j<nums2.size(); j++)
                {
                    if(nums1[i]<nums2[j])
                    {
                    result.push_back(nums2[j]);
                    flag=1;
                    break;
                    }
                }
                if(flag==0) result.push_back(-1);
                }
            }
        }
        return result;
    }
};
