//Eddie Alexis Cruz
#include<iostream>
#include<string>

using namespace std;

int main()
{
string first_name;
string last_name;
int lucky;


  cout<<" What is your first name?";
  cin>>first_name;
  cout<<"What is your last name?";
  cin>>last_name;
  cout<<"Welcome, "<< first_name[0] <<last_name[0]<<" here is your fortune"<<endl; 

  
  
  lucky=first_name.length();
  cout<<"Your lucky number is, "<<lucky<<endl;
  return 0;
}



