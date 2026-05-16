class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq; //num->freq

        for(int num : nums)
        {
            freq[num]++; // if number existes increase counter, else start with 0.
        }

        vector<pair<int,int>> arr;

        //store fre-> number
        for(auto pair : freq){
            arr.push_back({pair.second,pair.first});
        }

        //sort in descending
        sort(arr.rbegin(), arr.rend());

        vector<int> result;
        for(int i = 0; i<k; i++){
            result.push_back(arr[i].second);
        }

        return result;
    }
};
