#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int num[n],test[k];
    for (int i = 1 ; i <= n ; i++){
        cin>>num[i];
    }
    while(k--){
        int test,right=n,left=1;
        cin>>test;
        int index = n/2;
        while(test!=num[index]){
            if(left>=right){
                break;
            }
            if(test>num[index]){
                left = index+1;
            }else{
                right = index-1;
            }
            index = (left+right)/2;
        
        }
        if (test==num[index]){
            cout<<index<<endl;
        }else{
            cout<<"0\n";
        }
        
        
    }

    return 0;
}
