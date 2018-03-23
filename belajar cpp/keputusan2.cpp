#include <iostream>


using namespace std;

int main()
{

  // input 3 buah bilangan
    int nilai1, nilai2, nilai3;
    cout<<"masukkan nilai 1 "<<endl;
    cin>>nilai1;
    cout<<"masukkan nilai 2"<<endl;
    cin>>nilai2;
    cout<<"masukkan nilai 3"<<endl;
    cin>>nilai3;

  // mencari nilai rata-rata
  float rata_rata = ((float)(nilai1 + nilai2 + nilai3) / 3);

  // klasifikasi nilai
  if(rata_rata > 90)
  cout<<"A"<<endl;
  else if(rata_rata > 80 && rata_rata <= 90)
  cout<<"B+"<<endl;




}

// input 3 buah bilangan
// nilai rata-rata = jumlah / 3
// Rata > 90 = A
// Rata > 80 & Rata <= 90 B+
