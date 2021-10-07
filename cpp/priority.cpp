#include<iostream>
#include<queue>  
using namespace std;  

int main()
{
	priority_queue<int> p; // variable declaration
	p.push(10);
	p.push(30);
	p.push(20);
	
	cout<<"Number of elements available in p: "<<p.size()<<endl;
	
	while(!p.empty())
	{
		cout<<p.top()<<endl;
		p.pop();
	}
	
	return 0;
}
