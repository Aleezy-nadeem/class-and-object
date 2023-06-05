#include<iostream>
using namespace std;

class Date{
	
	
	// Data members (day, month, year)
	// Member funtions (get date, get month, get day, get year, set date)
	private:
		int day;
		string month;
		int year;
	public:
		
		string get_month(){
			return month;
		}
		
		bool set_date(int temp_day, string temp_month, int temp_year){
			
			day = temp_day;
			month = temp_month;
			year = temp_year;
			return true;
		}
		
};


int main(){
	
	Date d1;
	if(d1.set_date(3,"feb",2008)){
		cout<<"suceesful";
		
	}
	
}
