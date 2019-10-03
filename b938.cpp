#include<iostream>
using namespace std;
bool man_killed[1000001]={false};
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL);
    int mannum,killnum;
    cin>>mannum>>killnum;
    while(killnum--){
        int num2killbehide;
        cin>>num2killbehide;
        if(man_killed[num2killbehide]||num2killbehide>=mannum||num2killbehide<=0){
            cout<<"0u0 ...... ?\n";
            continue;
        }
        for(int i = num2killbehide+1;i<=mannum;i++){
            if(i==mannum&&man_killed[mannum]){
                cout<<"0u0 ...... ?\n";
                break;
            }
            if(man_killed[i]){
                continue;
            }else{
                man_killed[i] = true;
                cout<<i<<endl;
                break;
            }
            
        }

    }
    return 0;
}