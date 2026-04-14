string s = "HELLO";
int n = s.size();
for(int i = 0 ;i < n; i++){
            for(int l = 1; l <= n - i; l++){
                string str = s.substr(i, l);
                bool q = checkDup(str);
                if(q == true){
                    int currLen = str.length();
                    ans = max(currLen, ans);
                }
            }
        }
