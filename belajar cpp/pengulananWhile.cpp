#include<iostream>

using namespace std;

int main(){

  int awal = 0;
  while(awal <= 10)
  {
    cout<<awal<<endl;
    awal++;
  }

  cout<<"========================"<<endl;
  cout<<"pengulanan for"<<endl;

  int jumlah = 0;
  for(int awal = 0; awal<=10 ; awal++)
  {
      if(awal % 2 == 0)
      {
        cout<<awal<<endl;
        jumlah = jumlah + awal;
      }
   }

   /*
  awal = 0
  jumlah = 0 + 0 = 0
  awal = 2
  jumlah = 0 + 2 = 2
  awal = 4
  jumlah = 2 + 4 = 6
  awal = 6
  jumlah =  6 + 6 = 12
  awal = 8
  jumlah = 12 + 8 = 20
  awal = 10
  jumlah = 20 + 10 = 

   */

   cout<<"maka jumlah keseluruhan adalah : "<<jumlah<<endl;




}



/*
  inisialisasi awal , syarat (boolean), increment/ decrement

  int awal = 0;
  while(awal <= 10)
  {
    cout<<awal;
    awal++;
  }

 pengulangan for
 for(int awal = 0; awal<=10 ; awal++)
 {
  cout<<awal;

  }




*/
