
#include <iostream>
#include <string>
#include<vector>
using namespace std;
int main()
{
 int n,b,x,count=0,mcount=0;
 vector<int> arr;
 cin>>n;
 b=n;
 for(int i=0;b !=0;i++){
     
     x = b%2;
     arr.push_back(x);
     b /=2; 
     }

     for(int i=0;i<arr.size();i++){
         
         if(arr[i] == 1){
            
            ++mcount;
              if(mcount>count){
                 
                 count = mcount;
             }
            }
         else{
           
           mcount=0;
         }
         
         }
    
    cout<<count;
}
