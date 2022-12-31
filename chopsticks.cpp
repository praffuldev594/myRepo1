#include<bits/stdc++.h>
using namespace std;
int main(){

 #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

  int test;
  cin>>test;
  while(test--){
       int num,diff;
       cin>>num>>diff;
       int sticks[num];
       for(int i=0;i<num;++i){
           cin>>sticks[i];
       }
       sort(sticks,sticks+num);
       int idx=1,ans=0;
       while(idx<num){
           if(sticks[idx]-sticks[idx-1]<= diff){
              ans++;
              idx+=2;

           }
           else{
            idx+=1;
           }
       }
       cout<<"pair of possible chopsticks are = "<<ans<<"\n";
  }
}