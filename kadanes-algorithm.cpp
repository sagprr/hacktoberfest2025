class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        
        int n = arr.size();
        long long maxi=arr[0];
        long long sum = 0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            maxi = max(sum,maxi);
            if(sum<0)
            {
                sum = 0;
            }
        }
  
        return maxi;
        
    }
};
