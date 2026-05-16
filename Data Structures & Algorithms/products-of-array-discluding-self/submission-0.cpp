class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            int ans=1;
            for(int j=0;j<nums.size();j++){    
                if(i==j){
                    continue;
                }
                else{
                    ans= ans*nums[j];
                }
            }
            answer.push_back(ans);
        }
        return answer;
    }
};
