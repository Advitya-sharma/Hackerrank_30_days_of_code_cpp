#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double meal_cost,tip_percent,tax_percent;


    cin>>meal_cost>>tip_percent>>tax_percent;
    

       double tip = meal_cost * (tip_percent/100.0);
    double tax = meal_cost * (tax_percent/100.0);

double totalcost = meal_cost + tip + tax ;

//int total = ;
cout<<round(totalcost);

    return 0;
}
