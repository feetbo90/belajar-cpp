#include <iostream>

using namespace std;

int main(){

  // deklarasi array dinamic
  int bilanganganjil[10];



  //cin>>bilanganganjil[0];
  //cin>>bilanganganjil[1];

  // pengulangan

  /*for(int i = 0 ; i < 10; i++)
  {
    cin>>bilanganganjil[i];
  }

cout<<"========================="<<endl;

  for(int i = 0 ; i < 10; i++)
  {
    cout<<bilanganganjil[i]<<endl;
  }*/


cout<<"============================"<<endl;

int jumlah = 0;
for(int i = 0; i<100; i++)
{
  if(i % 2 == 1)
  {
    jumlah++;
  }
}
cout<<"maka jumlah : "<<jumlah<<endl;
int tampungArrayGanjil[jumlah];
int index = 0;

for (int i = 0; i < 100; i++) {
  /* code */
  if(i % 2 == 1)
  {
    tampungArrayGanjil[index] = i;
    index++;
  }

}

// tampil Data
for(int i = 0; i < jumlah; i++)
{
  cout<<"ini data ke "<<i<<" " <<tampungArrayGanjil[i]<<endl;
}


}
