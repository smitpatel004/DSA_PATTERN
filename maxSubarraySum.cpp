class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int low = 0;
       int high=k-1;
       int sum =0;
       int res;
       
       for(int i=0;i<=high;i++){
           sum += arr[i];
       }
       res = sum ;
       while(high<arr.size()){
            res = max(res,sum);
            low ++;
            high++;
            sum = sum - arr[low-1];
            if(high == arr.size())
            break;
            sum += arr[high];
            
       }
       return res;
    }
};
