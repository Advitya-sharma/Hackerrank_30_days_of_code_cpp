#include <cmath>
#include <cstdio>
#include <vector>
#include<string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int inx;
    string ins;
    string even;
    string odd;

    cin>>inx;

    while(inx--){
cin>>ins;

for(int i=0;i<ins.size();i++){

    if(i%2==0 || i==0){
        even = even+ins[i];
        }
        else{
            odd = odd +ins[i];
        }
       
}
cout<<even<<" "<<odd<<endl;
even="";
odd="";
 }


    return 0;
}
