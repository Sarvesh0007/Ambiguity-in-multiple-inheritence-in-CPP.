#include<iostream>
using namespace std;
class a
{
	protected:
		int k;
		public:
		void get_data()
		{
			cout<<"\nEnter the value of k =";
	        cin>>k;
		}
		void show_data()
		{
			cout<<"\nA ="<<k<<endl;
		}
};
class b
{
	protected:
		int m;
		public:
			void get_data()
			{
				cout<<"\nEnter the value of m =";
				cin>>m;
			}
			void show_data()
			{
				cout<<"\nM ="<<m<<endl;
			}
};
class D:public a,public b
{
	public:
		void get_data()
		{
			a::get_data();
			b::get_data();
		}
		void show_data()
		{
		    a::show_data();
		    b::show_data();
		    cout<<"\n Hello "<<endl;
		}
};
main()
{
	D d1;
	d1.get_data();
	d1.show_data();
}
