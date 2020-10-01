#include <bits/stdc++.h> 
using namespace std;
#define int long long
void computeLPSArray(string pat, int M, int lps[]) 
{ 
    // length of the previous longest prefix suffix 
    int len = 0; 
  
    lps[0] = 0; // lps[0] is always 0 
  
    // the loop calculates lps[i] for i = 1 to M-1 
    int i = 1; 
    while (i < M) { 
        if (pat[i] == pat[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else // (pat[i] != pat[len]) 
        { 
            // This is tricky. Consider the example. 
            // AAACAAAA and i = 7. The idea is similar 
            // to search step. 
            if (len != 0) { 
                len = lps[len - 1]; 
  
                // Also, note that we do not increment 
                // i here 
            } 
            else // if (len == 0) 
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 
  
// Prints occurrences of txt[] in pat[] 
vector<int> KMPSearch(string pat, string txt) 
{ 
    int M = pat.size();
    int N = txt.size(); 
    vector<int> vec;
    // create lps[] that will hold the longest prefix suffix 
    // values for pattern 
    int lps[M]; 
  
    // Preprocess the pattern (calculate lps[] array) 
    computeLPSArray(pat, M, lps); 
  
    int i = 0; // index for txt[] 
    int j = 0; // index for pat[] 
    while (i < N) { 
        if (pat[j] == txt[i]) { 
            j++; 
            i++; 
        } 
  
        if (j == M) { 
            vec.push_back(i-j);
            j = lps[j - 1]; 
        } 
  
        // mismatch after j matches 
        else if (i < N && pat[j] != txt[i]) { 
            // Do not match lps[0..lps[j-1]] characters, 
            // they will match anyway 
            if (j != 0) 
                j = lps[j - 1]; 
            else
                i = i + 1; 
        } 
    } 
    return vec;
} 
  
// Fills lps[] for given patttern pat[0..M-1] 

  
// Driver program to test above function 
signed main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string txt, pat;
    cin >> txt >> pat;
    int n = txt.size();
    txt+=txt;
    vector<int> vec = KMPSearch(pat, txt); 
    int arr[2*n] = {0};
    for(auto j : vec)
        arr[j+pat.size()-1]+=1;
    for(int i=1;i<2*n;i++)
        arr[i]+=arr[i-1];
    int ok = 0;
    vector<int> pos;
    for(auto j : vec)
        if(j < n && j+pat.size() -1 >= n)
        {
            ok = 1;
            pos.push_back(j+pat.size()-n);
        }
    sort(pos.begin(), pos.end());
    // cout << vec.size() <<  " " << vec[0] << " " << n << '\n';
    // for(int i=0;i<2*n;i++)
    //     cout << arr[i] << " ";
    // cout << '\n';
    int q;
    cin >> q;
    while(q--)
    {
        int len;
        cin >> len;
        int tot = len/(2*n);
        int rem = len%(2*n);
        int ans = 0;
        ans = ans + tot*arr[2*n-1];
        if(rem)
            ans+=arr[rem-1];
        // cout << "hello " << " " << tot << " " << arr[rem-1] << '\n';
        // cout << ans << '\n';
        if(ok)
        {
            if(tot)
            {
                ans+=(tot-1)*pos.size();
                ans+=(upper_bound(pos.begin(), pos.end(), rem) - pos.begin());
            }
        }
        cout << ans << '\n';       
    }
    return 0; 
} 
