// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        int cnt =0;
        int n =str.size();
        for(int i =0;i< n;i++){
            if(str[i] == '.'){
                cnt++;
            }
        }
        for(int i =0;i< n;i++){
            string s ="";
            while(isdigit(str[i])){
                s+=str[i];
                i++;
            }
            if(s == ""){
                return false;
            }
            if(str[i] != '.' && i < n){
                return false;
            }
            if(s[0] == '0' && s.size() != 1){
                return false;
            }
            if(stoi(s) > 255){
                return false;
            }
        }
        return cnt == 3;
    }
};
