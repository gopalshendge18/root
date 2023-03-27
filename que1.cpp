#include<bits/stdc++.h>
#define ll long long int
using namespace std ;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0 , j = 0 , k = m%(m+n) ;
        
        while(i < m && j < n) {
            if(nums1[i] < nums2[j]) {
                nums1[k++] = nums1[i] ; 
                i++ ;
            }
            else {
                nums1[k++] = nums2[j] ; 
                j++ ;
            }
            k%=(m+n);
        }
        
        while(i < m) {
            nums1[k++] = nums1[i] ; 
            i++ ;
            k%=(m+n);
        }
        
        while(j < n ) {
            nums1[k++] = nums2[j] ; 
            j++ ;
            k%=(m+n);
        }
        
        reverse(nums1.begin(),nums1.begin()+m) ;
        reverse(nums1.begin()+m,nums1.end()) ;
        reverse(nums1.begin(),nums1.end()) ;
        
    }
};

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);  
   ll T ;
   cin>>T ;
   while(T--){
      ll m,n ;
      cin>>m>>n ;
      vector<int>v1(n+m,0);
      for(ll i = 0 ; i < m ; i++){
          cin>>v1[i];
      }

      vector<int>v2(n,0);
      for(ll i = 0 ; i < n ; i++){
          cin>>v2[i];
      }

      Solution().merge(v1,m,v2,n) ;

      for (ll i = 0; i < m+n; i++)
      {
            cout<<v1[i]<<" ";
      }
      cout<<endl;
      
   }
}
bool isPowerOfTwo (int x)
{
 return x && (!(x&(x-1))); 
}
