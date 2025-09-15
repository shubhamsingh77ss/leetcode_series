//THIS PROGRAM There are numBottles water bottles that are initially full of water. You can exchange numExchange empty water bottles from the market with one full water bottle.
//The operation of drinking a full water bottle turns it into an empty bottle.
//Given the two integers numBottles and numExchange, return the maximum number of water bottles you can drink.
#include<iostream>
using namespace std;
int numWaterBottles(int numBottles,int numExchange)
{
    int ans=numBottles;
    while(numBottles>=numExchange)
    {
        int newBottles=numBottles/numExchange;
        int remBottles=numBottles%numExchange;
        ans=ans+newBottles;
        numBottles=newBottles+remBottles;
    }
    return ans;
}
int main()
{
    int x;
    cout<<"Enter the Number of bottles\n";
    cin>>x;
    int y;
    cout<<"Enter the number of Exhange\n";
    cin>>y;
    int tnb=numWaterBottles(x,y);
    cout<<"The total numner of bottles="<<tnb<<endl;
}
//Time Complexity: O(log(n))
//Space Complexity: O(1)
