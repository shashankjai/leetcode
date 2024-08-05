class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;
    int x,y;
     int n=nums.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++)
    {
        if(target==nums[i]+nums[j]){
            x=i;
            y=j;
        }
    }
    
}
ans.push_back(x);
ans.push_back(y);
return ans;
    }
};