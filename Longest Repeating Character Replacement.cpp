class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0;

        for(char ch = 'A';ch<='Z';ch++){
            int i=0;
            int j=0;
            int count = 0;

            while(j<n){
                if(ch != s[j]){
                    count++;
                }
                while(count > k){
                    ans = max(ans,j-i);
                    if(s[i] != ch){
                        count--;
                    }
                    i++;
                }
                j++;
            }
            ans = max(ans,j-i);
        }
        return ans;
    }
};
