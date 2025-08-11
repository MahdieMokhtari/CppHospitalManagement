#include <iostream>
using namespace std;

struct date 
{
	int y,m,d;
};
struct hospital
{
	char name[20];
	char address[20];
	date make;
	float arae;
	int doc;
	int sick;
};
void print (hospital );
int main ()
{
	int n;
	cin>>n;
	hospital *a= new hospital [n];
	for (int i=0 ; i<n ; i++)
	{
		cin>>a[i].name>>a[i].address>>a[i].make.y>>a[i].make.m>>a[i].make.d>>a[i].arae>>a[i].doc>>a[i].sick;
	}
	
/*
	hospital max=a[0];
	for (int i=0 ; i<n ; i++)
		if (a[i].sick>max.sick)
		max=a[i];
		print (max);
*/
	
	int x,max_sick=a[0].sick;
	for (int i=0 ; i<n ; i++)
		if (a[i].sick > max_sick)
    	{
			max_sick=a[i].sick;
			x=i;
		}
	cout<<"max sick : ";
	print (a[x]);
	cout<<'\n';
	
	hospital min=a[0];	
	for (int i=0 ; i<n ; i++)
		if (a[i].make.y < min.make.y)
			min=a[i];
		
			else if (a[i].make.y == min.make.y && a[i].make.m < min.make.m)
				min=a[i];
		
				else if (a[i].make.y == min.make.y && a[i].make.m == min.make.m && a[i].make.d < min.make.d)
					min=a[i];
	cout<<"oldest hospital : ";
	print (min);
	cout<<'\n';
	int y=0;
	for (int i=0 ; i<n ; i++)
		if ( a[i].doc>=50 && a[i].arae>1000 )
			y++;
	cout<<"min doc & max area: "<<y<<'\n';
	
	hospital max_doc=a[0];
	for (int i=0 ; i<n ; i++)
		if (a[i].doc > max_doc.doc)
			max_doc=a[i];
	cout<<"max doc : ";
	print (max_doc);
	cout<<'\n';
	for (int i=0 ; i<n ; i++)
	print (a[i]);
	
	delete []a;
}

void print (hospital a)
{
	cout<<'\n'<<a.name<<'\n';
	cout<<a.address<<'\n';
	cout<<a.make.y<<'\t';
	cout<<a.make.m<<'\t';
	cout<<a.make.d<<'\n';
	cout<<a.address<<'\n';
	cout<<a.doc<<'\n';
	cout<<a.sick;
}

