class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int low =0;
        int high = 0;
        int res=-1;
        map<char,int>m;
        for(int high =0 ; high < s.size();high++){
            m[s[high]]++;
            
            while(m.size()>k){
                m[s[low]]--;
            
                if(m[s[low]] == 0)
    m.erase(s[low]);
        low++;
            }
            if(m.size()==k){
                int len = high - low +1;
                res = max(res,len);
            }
        }
        return res;
    }
};
