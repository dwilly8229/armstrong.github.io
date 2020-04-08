#include<iostream>
using namespace std;
int main()
{
	int num, temp, r,sum=0;
	cout<<"enter the number";
	cin>>num;
    temp=num;
    while(temp!=NULL)
    {
    	r=temp%10;
    	sum+=r*r*r;
    	num=num/10;
    }
    if(sum==num)
    cout<<"the number is an armstrong number";
    else
    cout<<"the nmber is not an armtrong number";
}