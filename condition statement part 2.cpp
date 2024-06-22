/* 1)
#include<iostream>
using namespace std;
int main()
{
	float a, b;
	cout<<"Enter the two float number as input: ";
	cin>> a;
	cin>> b;
	if(a>1.0 && b>a){
		cout<<"the condition in if statement is correct";
	}
	
}*/

/* 2)
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Student, please enter the marks to calculate the grade :";
	cin>>marks;
	if(marks>90)
	{
		cout<<"A";
	}
	else if(marks> 80)
	{
		cout<<"B";
	}
	else if(marks>70)
	{
		cout<<"C";
	}
	else 
	{
		cout<<"Pass";
	}
	
}
*/



/*3)
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"Give four integer as input : a,b,c,d"<<endl;
	cin>>a>>b>>c>>d;
	if(a>b && c>d){
		cout<<"haha";
	}else if(a>b && c<d){
		cout<<"hehe";
	}else{
		cout<<"huhu";
	}
} */


// 4)

#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter integer a "<<endl;
	cin>>a;
	switch(a){
		case 1:
			cout<<"The value of a is 1"<<endl;
			break;
		case 2:
			cout<<"The value of b is 2"<<endl;
			break;
		default:
			cout<<"default will be always printed"<<endl;
	}
}


	


