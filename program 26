#include<iostream>
using namespace std;

int main(){
	int height [5], index,tallest,smallest,total;
	float ave;
	
	cout<<"enter the height of 5 applicants.";
	for(index= 0; index < 5; index++){
		cout<<"\nApplicant #"<<index<<":";
		cin>>height[index];
	}
	total = 0;
		for (index=0; index < 5; index++)
		total += height [index];
		
		ave = (float)total/5;
		tallest = height [0];
		smallest = height [0];
		
		for (index = 0; index < 5; index++){
			if(tallest < height [index])
			tallest = height [index];
		else if(smallest > height [index])
			smallest = height [index];
		}
		cout<<"\nThe average height of 5 applicants is: "<<ave<<"\n";
		cout<<"the tallest applicants is:"<<tallest<<"\n";
		cout<<"the smallest applicants is:"<<smallest;
}
