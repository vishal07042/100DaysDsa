
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    vector<int> p={1,2,5,9};
    int n=p.size();
    int tt=6;
    int sum=0;
    vector <int> v;
     int  ans; 
     int ansf; //here change

  for (int j = 1; j < n ; j++) {

    for(int i=0;i<n;i++){
        ans=p[i]/j;
       // v.push_back(ans);

        
        v.push_back(ans);
     
        
   
       

        
    };

   //cout<<
  sum= accumulate(v.begin(),v.end(),0);
    //break;
      
      //cout<<sum;
      
      if(sum<=tt){
         ansf=j;
        cout<<ansf;
        break;
       
      }else{
        // cout<<ansf;
        // break;
         sum=0;
      }
   

   
    

    
  };


//   for(int x:v) {
//     cout << x;
//   }
    return 0;
}