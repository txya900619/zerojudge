#include<iostream>
using namespace std;
bool man[1000001] = {false};
int main(){
    std::ios::sync_with_stdio(false),cin.tie(NULL);
    int n, m,m_d,ans;
    int kill_list[1000001];
    bool secc;
    cin >> n >> m;
    m_d = m;
    for (int i = 1; i <= m;i++){
        cin >> kill_list[i];
    }
    while(m--){
        secc = false;
        if(man[kill_list[m_d-m]]||kill_list[m_d-m]<=0||kill_list[m_d-m]>n){
            cout << "0u0 ...... ?\n";
            continue;
        }
        if(man[kill_list[m_d-m]+1]){
            for (int i = kill_list[m_d - m ] + 2; i <= n;i++){
                if(!man[i]){
                    ans = i;
                    man[i] = true;
                    secc = true;
                    break;
                }else if(i==n){
                    secc = false;
                }
            }

        }else{
            ans = kill_list[m_d - m ] + 1;
            man[kill_list[m_d - m ] + 1] = true;
            secc = true;
        }
        if (ans>n){
            cout << "0u0 ...... ?\n";
            continue;
        }
        if(secc){
            cout << ans <<"\n";
        }
        else{
            cout << "0u0 ...... ?\n";
        }
    }

    return 0;
}