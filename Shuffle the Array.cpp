class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        int m=nums.size();
        int it1=0;
        int it2=m/2;
        vector <int> ans;
        bool b=true;

        for (int i = 0; i < m; ++i)
        {
        	if(b==true and it1<m/2)
        	{
        		 ans.push_back(nums[it1++]);
        		b=false;
        	}
        	else if(b==false and it2<m)
        	{
        		ans.push_back(nums[it2++]);
        		b=true;
        	}

        }
        
        return ans;
    }
};
