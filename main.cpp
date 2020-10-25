#include <iostream>
using namespace std;

int main(){
cout<<"I want to win the Champions League"<<endl;
int N,i,S=0;
cin>>N;
int v1[N],v2[N];
for(i=0; i<N; i++)
   cin>>v1[i];
for(i=0; i<N; i++)
   cin>>v2[i];
for(i=0; i<N; i++)
  S+=v1[i]*v2[i];
cout<<S<<endl;
}     