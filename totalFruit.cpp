class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low  = 0;
        int high =0;
        int res =1;
        map<int,int>m;
        for(int high=0;high<fruits.size();high++){
                m[fruits[high]]++;
                while(m.size()>2){
                    m[fruits[low]]--;
                    if(m[fruits[low]] == 0 )m.erase(fruits[low]);
                    low++;
                }
                if(m.size()<=2){
                    int len = high - low +1;
                    res = max(res,len);
                }
        }
        return res;
    }
};
