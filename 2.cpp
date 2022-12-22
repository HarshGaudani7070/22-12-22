#include<iostream>
using namespace std;

class data{
	
	private:
		int A;
		int B;
		
	public:
	    void read(){
	    	
	    	cout<<"ENTER A := ";
	    	cin>>A;
	    	cout<<"ENTER B := ";
	    	cin>>B;
	    	
}
	    void print(){
	    	    	
	    	cout<<"YOUR VALUE OF A= "<<A<<endl;
	    	cout<<"YOUR VALUE OF B= "<<B<<endl;
		}		
};

main(){
	
	data h;
	
	h.read();
	h.print();
	
}
