#include<iostream>

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

        while(1){
            int index =left+(right-left)/2;
            if(test==num[index]){
                cout<<index<<endl;
                break;
            }
            if(test>num[index]){
                left = index+1;
            }else{
                right = index-1;
            }
            if(right-left<=1){
                if(test==num[right]){
                    cout<<right<<endl;
                }else if(test==num[left]){
                    cout<<left<<endl;
                }else{
                    cout<<"0\n";
                }
               
                break;
            }
        }
        
    }

    return 0;
}