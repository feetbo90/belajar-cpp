#include <iostream>



using namespace std;

// fungsi tanpa pengembalian
void penjumlahan(int bil1, int bil2){

    int hasil = bil1 + bil2;
    cout<<"maka hasil penjumlahannya adalah : "<<hasil<<endl;
}


// fungsi parameter array
void masukArray(int array[])
{
  for(int i = 0 ; i< 2; i++)
  {
    cout<<array[i]<<endl;
  }
}




// fungsi dengan pengembalian nilai
int pengurangan(int bil3, int bil4)
{
  int hasil = bil3 - bil4;
  return hasil;
}


int main()
{
  int bil1, bil2;

  bil1 = 10;
  bil2 = 20;
  // cara pemanggilan fungsi tanpa pengembalian
  penjumlahan(bil1, bil2);
  cout<<"maka pengurangannya adalah : "<<pengurangan(bil1, bil2)<<endl;
  int kurang = pengurangan(bil1, bil2);
  cout<<"maka pengurangannya adalah : "<<kurang<<endl;

  int array[2];
  array[0] = 10;
  array[1] = 11;
  masukArray(array);
  //array = {1, 2};

}






/*

  penjumlahan
  pengurangan
  pembagian
  sisa pembagian
  perkalian


  parameter
  tipe_data nama_variabel != value

  tipe_data nama_fungsi(parameter1, parameter2){



}

  fungsi tanpa pengembalian
  fungsi dengan pengembalian


*/
