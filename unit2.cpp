#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    vector<int> p = {3, 3, 4, 5, 5, 6, 6, 9, 9};
         //vector<int> p={1,1,2,2,4,5,5};
        //  vector<int> p={1 ,1, 3, 5, 5 };
    //   vector<int> p= {1, 1, 4, 4, 15};


    int n = p.size();
    vector <int > q; 

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;



         while(s<=e){ 





            if(p[s]+p[e] == p[s+1]+p[e-1]){
                
                
            }else{

                if(p[s]==p[s+1] or p[s]==p[s-1]){ 
                    q.push_back(p[e]);
                      
                 }else{
                    q.push_back(p[s]);
                 }

            }
            s=s+2 ;
                e=e-2;
        
            
       }


       for(int x:q) {
        cout << x;
       }




    return 0;
}