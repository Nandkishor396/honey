#include<iostream>
#include<conio.h>
class employe
{
	private:
		int id;
		char name;
		
		public:
			void getin();
			void getout();
};

void employe::getin()
{
	cout<<"enter id of employe"<<endl;
	cin>>id;
	cout<<"enter employe name"<<endl;
	cin>>name;
}
void employe :: getout()
{
	cout<<id<<endl;
	cout<<name<<endl;
 } 
 
 void main()
 {
 	employe e[10];
 	int i;
 	cout<<"enter the records of 10 employe"<<endl;
 	for(i=0;i<10;i++)
 	{
 		e[i].getin();
	 }
	 
	 cout<<"the record of the employe are"<<endl;
	 for(i=0;i<10;i++)
	 {
	 	e[i].getout();
	 }
	 getch();
 }