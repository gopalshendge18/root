#include<bits/stdc++.h>
using namespace std;

void print(vector<int>q,vector<int>&p,int index){

if(index==p.size()){
    for(auto it:q)
    cout<<"Change in root "<<endl;
    return ;
}

print(q,p,index+1);                                   
                                                        

q.push_back(p[index]);
print(q,p,index+1);

q.pop_back();



}

int main(){
vector<int>p,q{1,2,3};
 print(p,q,0);

    return 0;
}
