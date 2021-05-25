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
            if(umap.find(nums1[i]) != umap.end())
            {
                int flag=0;
                int start=umap[nums1[i]];
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
        return result;
    }
};
