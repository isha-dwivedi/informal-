//inverted right triangle star pattern
#include<iostream>
using namespace std;
int main()
{
//print the stars
 int a=10;
for(int i=1; i<=a;i++)
	{
		if(i==1 || i==a){

			for(int j=1; j<=a; j++)
 			{
				
					cout<<"*";
					}
		else 

			{
				if(int j==2*i)
			{for(int j=0;j<=a;j++)
			cout<<" ";}
			else
			cout<<"*";

}
cout<<endl;
}
}


