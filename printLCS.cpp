#include<bits/stdc++.h>
using namespace std;

    int t[1001][1001];
    void LCS(string &x, string &y, int m, int n){
        for(int i = 0; i < m + 1; i++){
            for(int j = 0; j < n + 1; j++){
                if(i == 0 || j == 0){
                    t[i][j] = 0;
                }
            }
        }
        
        for(int i = 1; i < m + 1; i++){
            for(int j = 1; j < n + 1; j++){
                if(x[i-1] == y[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                } else {
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
    }

int lcs(string &s1, string &s2) {
        // code here
        memset(t, -1, sizeof(t));
        int m = s1.length();
        int n = s2.length();
        
        LCS(s1, s2, m, n);
        
        string s = "";
        
        int i = m, j = n;
        
        while(i > 0 && j > 0){
            if(s1[i-1] == s2[j-1]){
                s.push_back(s1[i-1]);
                //cout << s1[i] << "  ";
                i--;
                j--;
            } else {
                if(t[i-1][j] > t[i][j-1]){
                    i--;
                } else {
                    j--;
                }
            }
        }
        
        reverse(s.begin(), s.end());
        
        cout << s << "  ";
        return t[m][n];
    }

int main()
{
    //cout<<"Hello World";
    string a = "abcdaf";
    string b = "acbcf";
    cout << lcs(a, b);
    
    return 0;
}
