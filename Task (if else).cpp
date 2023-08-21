#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter age ";
	cin>>age;
	
	if(age>10 && age<20){
		cout<<"Ali House"<<endl;
	}
	else if(age>20 && age<30){
		cout<<"ijaz house"<<endl;
	}
	else if(age>30 && age<50){
		cout<<"aziz house"<<endl;
	}
	else{
		cout<<"zain house"<<endl;
	}
}
