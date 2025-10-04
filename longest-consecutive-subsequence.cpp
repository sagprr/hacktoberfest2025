class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        int m=1;
        int c=1;
        
        for (int i = 1; i < n; i++) 
        {
            if (arr[i] == arr[i - 1] + 1) 
            {
                c++;
            }
            else if (arr[i] != arr[i - 1]) 
            {
                 c = 1; 
            }
            m = max(m, c); 
        }
        
        return m;
    }
};
