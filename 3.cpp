#include<iostream>
using namespace std;

class data{
	
	private:
		int emp_id;
		char emp_name[50];
		char emp_role[50];
		int emp_age;
		int emp_salary;
		int emp_experience;
		char emp_city[50];
		char emp_company_name[50];
		
	public:
		void setter(){
			cout<<"ENTER ID= ";
			cin>>emp_id;
			cout<<"ENTER NAME= ";
			cin>>emp_name;
			cout<<"ENTER ROLE= ";
			cin>>emp_role;
			cout<<"ENTER AGE= ";
			cin>>emp_age;
			cout<<"ENTER SALARY= ";
			cin>>emp_salary;
			cout<<"ENTER EXPERIENCE= ";
			cin>>emp_experience;
			cout<<"ENTER CITY= ";
			cin>>emp_city;
			cout<<"ENTER COMPANY NAME= ";
			cin>>emp_company_name;	
		}
		
		void getter(){
			
			cout<<"YOUR VALUE ID= "<<emp_id<<endl;
			cout<<"YOUR VALUE NAME= "<<emp_name<<endl;
			cout<<"YOUR VALUE ROLE= "<<emp_role<<endl;
			cout<<"YOUR VALUE AGE= "<<emp_age<<endl;
			cout<<"YOUR VALUE SALARY= "<<emp_salary<<endl;
			cout<<"YOUR VALUE EXPERIENCE= "<<emp_experience<<endl;
			cout<<"YOUR VALUE CITY= "<<emp_city<<endl;
			cout<<"YOUR VALUE COMPANY NAME= "<<emp_company_name<<endl;
			
		}		
};

main(){
	
	data h,a,r,s,u;
	
	h.setter();
	h.getter();
	
	a.setter();
	a.getter();
	
	r.setter();
	r.getter();
	
	s.setter();
	s.getter();
	
	u.setter();
	u.getter();
	
}

	
	
