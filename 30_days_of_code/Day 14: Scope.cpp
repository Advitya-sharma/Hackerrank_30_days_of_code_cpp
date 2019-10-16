
Difference(){}

	Difference(vector<int> a){

        elements = a;
    }
void computeDifference(){
int x;
int mdiff=0;
int diff;
for(int i=0;i<elements.size();i++){

x = elements[i];

for(int j=0;j<elements.size();j++){

diff = abs(x-elements[j]);
//cout<<"dif"<<diff<<endl;
if(diff>mdiff){
    mdiff = diff;
}
}
}
maximumDifference = mdiff;

}
