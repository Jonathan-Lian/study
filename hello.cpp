
#include <iostream>
using namespace std;

int main()
{
	int i=0, k=0;
	int count;
	do
	{
		cout<<"press a number[0...100]: "<<endl;
		cin>>i;

	}while(i<0 || i>100);

	cout<<"hello world!"<<endl;
	for(k = i; k--; k>=0)
	{
		count += k;
	}
	cout<<"0+1+2+...."<<i<<"= "<<count<<endl;
	return 0;
}
             