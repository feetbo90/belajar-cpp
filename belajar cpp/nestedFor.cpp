#include<iostream>


using namespace std;

int main(){
  int pengulangan1, pengulangan2;
  cout<<"Masukkan untuk pengulangan pertama"<<endl;
  cin>>pengulangan1;
  cout<<"Masukkan untuk pengulangan kedua "<<endl;
  cin>>pengulangan2;

  for(int i = 1; i< pengulangan1; i++)
  {
      cout<<"pengulangan 1 ke :"<<i<<endl;
    for(int j= 1 ; j<pengulangan2; j++)
    {
        cout<<"pengulangan 2 ke :"<<j<<endl;
    }



  }

  cout<<"================================"<<endl;
// 2, 3
// 1 2 3
// 1 2 3
  for(int i = 1; i<= pengulangan1; i++)
  {

    for(int j= 1 ; j<=pengulangan2; j++)
    {
        cout<<"*";
    }
    cout<<endl;



  }




}
