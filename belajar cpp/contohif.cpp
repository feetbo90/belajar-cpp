#include<iostream>

using namespace std;

int main()
{
  int value1  , value2 , value3 ;

  cout<<"Masukkan nilai 1 : "<<endl;
  cin>>value1;
  cout<<"Masukkan nilai 2 : "<<endl;
  cin>>value2;
  cout<<"Masukkan nilai 3 : "<<endl;
  cin>>value3;


  if(value1 > value2)
  {
    if(value1 > value3)
    {
      cout<<value1;
    }else{
      cout<<value3;
    }

  }else {
    if(value2 > value3)
    {
      cout<<value2;
    }else {
      cout<<value3;
    }
  }




}
