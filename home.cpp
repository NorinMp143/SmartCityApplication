#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

class C
{
	public:
		string Nm,Em,Cn,St,d;int ht;
		void space()
		{
			int n=0;
         	while(n<5)
        	{
   	            cout<<"\n";
        		n++;
        	}
		}
		void exit()
		{
			space();
        	cout<<"THANK YOU FOR VISIT OUR SMART CITY APPLICATION";
        	space();
        	getch();
		}
		void detail();
		void hotel();
		void star5();
		void star3();
		void star();
		void tourist();
		void jal();
		void jantar();
		void hawa();
};
class A:public C
{
	public:
		string a,t;int x,s;
		void wel();
		void start();
};
   void A::wel()
   {
	 space();
    ifstream in("wel.txt");
    while(getline(in,a))
    {
    	cout<<a;
	}
    in.close();
    space();
    cout<<"1.START\t\t\t\t2.EXIT";
   }
   void A::start()
   {
   	space();
   	ofstream of("start.txt");
   	cout<<"\t\t\t\tSIGN UP";
   	cout<<"\n\n\tName : ";cin>>Nm;of<<"\n\n\t\t\t\t\t\t\t\t\tName : ";of<<Nm;
   	cout<<"\n\tEmail Id : ";cin>>Em;of<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tEmail Id : ";of<<Em;
   	cout<<"\n\tState : ";cin>>St;of<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t State : ";of<<St;
   	cout<<"\n\tCountry : ";cin>>Cn;of<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tCountry : ";of<<Cn;
   	of.close();
   	cout<<"\n\n\tAre You Going With This Imformation -->";
   	cout<<"\n\t1.Confirm\t\t\t\t2.Change\n\t\t\t";cin>>x;
   	if(x==1)
   	{
   		cout<<"\n\t\t\t\tYour Account";
   	    ifstream in("start.txt");
        while(getline(in,t))
        {
        	cout<<t;
	    }
        in.close();
        cout<<"\n\n\tClick on Submit & Go TO Imformation -->";
        cout<<"\n\t1.SUBMIT\t\t\t\t2.Exit";cin>>s;
        if(s==1)
        {
        	detail();
		}
		else
		{exit();}
   }
   else{start();}
}
void C::detail()
{
	space();
	ifstream in("detail.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
	cin>>ht;
    switch(ht)
    {
    	case 1:hotel();break;
    	case 2:tourist();break;
    	default:exit();break;
	}
}
void C::hotel()
{
	space();
	ifstream in("hotel.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
	cin>>ht;
    switch(ht)
    {
    	case 1:star5();break;
    	case 2:star3();break;
    	case 3:star();break;
    	default:exit();break;
	}
}
void C::star5()
{
	space();
	ifstream in("star5.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
    cin>>ht;
    switch(ht)
    {
    	case 1:tourist();break;
    	default:exit();break;
	}
}
void C::star3()
{
	space();
	ifstream in("star3.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
    cin>>ht;
    switch(ht)
    {
    	case 1:tourist();break;
    	default:exit();break;
	}
}
void C::star()
{
	space();
	ifstream in("star.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
    cin>>ht;
    switch(ht)
    {
    	case 1:tourist();break;
    	default:exit();break;
	}
}
void C::tourist()
{
	space();
	ifstream in("tourist.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
    cin>>ht;
    switch(ht)
    {
    	case 1:jal();break;
    	case 2:jantar();break;
    	case 3:hawa();break;
    	default:exit();break;
	}
}
void C::jal()
{
	space();
	ifstream in("jal.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
    
}
void C::jantar()
{
	space();
	ifstream in("jantar.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
    
}
void C::hawa()
{
	space();
	ifstream in("hawa.txt");
    while(getline(in,d))
    {
     	cout<<d;
    }
    in.close();
    
}
class B:public A
{
	public:
		int c;
		B(){
		}
		B(int b)
		{
			c=b;
		}
	void cond()
	{
		if(c==1)
		{
	       start();
		}
		else
		{
	       exit();
	    }
	}
};
  int main()
   {
   	B ob;int b,x;
   	ob.wel();
   	cin>>b;
   	ob=b;
   	ob.cond();
   	cin>>x;
    switch(x)
    {
    	case 1:ob.start();break;
    	default:ob.exit();break;
	}
   }
