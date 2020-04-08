#include<iostream>
using namespace std;
int main()
{
	int num, temp, r,sum=0;
	cout<<"enter the number";
	cin>>num;
    temp=num;
    while(temp!=0)
    {
    	r=temp%10;
    	sum+=r*r*r;
    	temp=temp/10;
    }
    if(sum==num)
    cout<<"the number is an armstrong number";
    else
    cout<<"the nmber is not an armtrong number";
}
