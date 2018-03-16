#include <iostream>

using namespace std;

int main()
{
  int bilangan1, bilangan2;
  cout<<"Masukkan bilangan pertama : "<<endl;
  cin>>bilangan1;
  cout<<"Masukkan bilangan kedua : "<<endl;
  cin>>bilangan2;

  cout<<"hasil penjumlahannya : "<<(bilangan1 + bilangan2)<<endl;
  cout<<"hasil pengurangannya : "<<(bilangan1 - bilangan2)<<endl;
  cout<<"hasil pembagiannya : "<<((float)bilangan1 / (float) bilangan2)<<endl;
  cout<<"hasil perkaliannya : "<<(bilangan1 * bilangan2)<<endl;
  cout<<"hasil modulo : "<<(bilangan1 % bilangan2)<<endl;

}
