/**   UEFA Champions League (UCL) **/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll ans,res,p,q;

void solve()
{
    int goal1,goal2;
    string team1,team2,vs;
    map<string,int> point;
    map<string,int> goal_dif;
    for(int i=0; i<12; i++)
    {
        cin >> team1 >> goal1 >> vs >> goal2 >> team2;
        if(goal1> goal2)
        {
            point[team1]+=3;
            point[team2]+=0;
            goal_dif[team1]+=goal1-goal2;
            goal_dif[team2]-=goal1-goal2;
        }
        else if(goal1<goal2)
        {
            point[team2]+=3;
            point[team1]+=0;
            goal_dif[team2]+=goal2-goal1;
            goal_dif[team1]-=goal2-goal1;
        }
        else
        {
            point[team1]+=1;
            point[team2]+=1;
        }
    }
    vector<tuple<int,int,string>> vec;
    auto it1=goal_dif.begin();
    for(auto it=point.begin(); it!=point.end(); ++it,++it1)
    {
        vec.push_back(make_tuple(it->second, it1->second, it->first));
    }
    sort(vec.rbegin(),vec.rend());
    for(int i=0; i<2; i++)
        cout << get<2> (vec[i]) << " ";
    cout << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tt=1;
    cin >> tt;
    while(tt--)
        solve();
}
