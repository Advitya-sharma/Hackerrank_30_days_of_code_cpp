#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {

map <string,long>dic;
int n;
long num;
string s;
cin>>n;
while(n--){

cin>>s>>num;
dic[s] = num;
}
while(cin>>s){
    if(dic.find(s) != dic.end()){
        cout<<s<<"="<<dic[s]<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}

    return 0;
}
