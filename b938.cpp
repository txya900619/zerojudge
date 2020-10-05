#include<iostream>
using namespace std;
int behide[1000002];
bool died[1000001] ;
int main(){
    cin.sync_with_stdio(false),cin.tie(NULL);
    int mannum,killnum;
    cin>>mannum>>killnum;
    for(int i=1;i<mannum;i++){
        behide[i]=i+1;
    }
    while(killnum--){
        int num2killbehide;
        cin>>num2killbehide;
        if(behide[num2killbehide]==0||died[num2killbehide]){
            cout<<"0u0 ...... ?\n";
        }else{
            cout<<behide[num2killbehide]<<"\n";
            died[behide[num2killbehide]]= true;
            behide[num2killbehide]=behide[behide[num2killbehide]];
            
        }
    }
    return 0;
}
