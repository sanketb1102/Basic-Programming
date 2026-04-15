string s = "HELLO";
int cnt = 0;
int n = s.size();
for(int i = 0 ;i < n; i++){
            for(int l = 1; l <= n - i; l++){
                string str = s.substr(i, l);
                cnt++; // just for total no. of substrings possible
            }
}
