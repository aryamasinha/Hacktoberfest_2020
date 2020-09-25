#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t-- > 0) {
        int d,present=0,min,count=0;
        cin >> d;
        string str;
        cin >> str;
        for (int i = 0;i < str.length();i++) {
            if (str[i] == 'P') {
                present++;
            }
        }
        min = ceil(0.75 * d);
        if (present >= min) {
            cout << 0 << endl;
        }
         if (present < min) {
            for (int i = 2;i < d - 2;i++) {
                if (str[i] == 'A') {
                    if ((str[i - 1] == 'P' || str[i - 2] == 'P') && (str[i + 1] == 'P' || str[i + 2] == 'P')) {
                        count++;
                        present++;
                        if (present >= min) {
                            cout << count << endl;
                            break;
                        }
                    }
                }
            }
            if (present < min) {
                {
                    cout << -1 << endl;
                }
            }
        }    
    }
    return 0;
}
