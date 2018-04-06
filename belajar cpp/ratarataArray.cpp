
#include<iostream>

using namespace std;

int main(){

  int input;
  int jumlah =0;
  cout<<"Masukkan size dari array : "<<endl;
  cin>>input;

  // pesan array
  int rataRata[input];

  for(int i = 0; i< input; i++)
  {
    cout<<"Masukkan data ke "<<i+1<<" : ";
    cin>>rataRata[i];
  }

  for(int i = 0 ; i < input; i++)
  {
    cout<<"Data ke "<<i+1<<" : "<<rataRata[i]<<endl;
  }

  for(int i = 0; i< input ; i++)
  {
    jumlah = rataRata[i] + jumlah;
  }

  cout<< jumlah;



}


/*
  Tugas Di Rumah

  1. cari nilai rata-rata
  2. rata-rata > 90 A
  rata-rata > 80  dan rata-rata <= 90
  B+



*/
