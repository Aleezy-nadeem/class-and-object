#include<iostream>

using namespace std;


class student{
	private:
		string name;
		int rollno;
		
	public:
		student(){
			rollno = 0;
			name = "\0";
			cout<<"Constructor called"<<endl;
			cout<<"value of name is: "<<name<<endl;
			cout<<"value of roll no is: "<<rollno<<endl;
		}
		
		// Parametrized constructor
		student(string n, int r){
			name = n;
			rollno = r;
			cout<<endl<<"Value of rollno: "<<rollno<<endl;
			cout<<endl<<"Parametrized constructor"<<endl;
			
		}
		
		string get_name();
		
		
		~student(){
			cout<<endl<<"Value of rollno: "<<rollno<<"destryoed"<<endl;
	
		}
};


string student::get_name(){
	return name;
}


int main(){
	student s1("akbar",1),s2("Ali", 2),s3("akbar",3);
	cout<<s1.get_name(){
		
	int a, b, c, d;
	a = 0;
	b =0;
	c = 0;
	d = 0;
}
