class Solution {
public:

    int freq(unordered_map<char,int>f){
        int maxi = INT_MIN;
        for(auto s:f){
            maxi = max(maxi , s.second);
        }
        return maxi;
    }
    int characterReplacement(string s, int k) {
       int n=s.size();
       int low=0,high=0;
       int res=INT_MIN;
       unordered_map<char,int> f;

       for(high=0;high<n;high++)
       {
           f[s[high]]++;
           int len=high-low+1;
           int maxlen = freq(f);
           int diff = len - maxlen;
           while(diff>k)
           {
               f[s[low]]--;
              
               low++;
               maxlen = freq(f);

               len=high-low+1;
               diff = len -maxlen;
           }
          len = high -low +1;
           res=max(res,len);
       }
     
       return res;

    }
};
