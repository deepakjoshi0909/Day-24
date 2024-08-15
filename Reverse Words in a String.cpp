class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans;
        string temp;
        int i=0;

        while(i<n && s[i] == ' ') i++;

        while(i<n){
            if(s[i] == ' '){
                if(!temp.empty()){
                    reverse(temp.begin(),temp.end());
                    ans += temp + " ";
                    temp = "";
                }
                while(i<n && s[i] == ' ') i++;
            }
            else{
                temp.push_back(s[i]);
                i++;
            }
        }

        if(!temp.empty()){
            reverse(temp.begin(),temp.end());
            ans += temp;
        }
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
