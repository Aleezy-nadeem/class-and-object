#include<iostream>
using namespace std;
class mynum
{
private :
    int var;
public :
    mynum()
    {

    }
    void getvalue()
    {
        cout<<"Enter the number: ";
        cin>>var;
    }

int setvalue()
{
    return var;

}
void positive()
{

    cout<<"Position value is: "<<setvalue()*(+1)<<endl;

}
void negative()
{

    cout<<"Negative value is: "<<setvalue()*(-1)<<endl;
}
};
int main ()
{  int obj;
cout<<"Enter number of objects you want to create: ";
cin>>obj;
 mynum n1[obj];
    for(int i=0; i<obj; i++)
    {
        n1[i].getvalue();
        n1[i].setvalue();
        n1[i].positive();
        n1[i].negative();
    }
 
    return 0 ;

}
