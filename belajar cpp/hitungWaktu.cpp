/*s = 200 km

v = 40 km/jam
t = 5 jam

t =  s / v

40 + 40 + 40 + 40 + 40 = 200
t = 5 jam*/

#include<iostream>

using namespace std;

int main(){
  int jarak, waktu, kecepatan;
  cout<<"masukkan jarak : "<<endl;
  cin>>jarak;
  cout<<"masukkan kecepatan :"<<endl;
  cin>>kecepatan;
  waktu = 0;
  for(int i = kecepatan ; i <= jarak; i+=kecepatan)
  {

      waktu++;
      cout<<"ini waktu :"<<waktu<<endl;
  }

  cout<<"maka waktu yang di dapat adalah :"<<waktu<<" jam"<<endl;

}
