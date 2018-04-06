#include<iostream>

using namespace std;

void tampilArray(int array[2][2]){

  for(int i= 0 ;i < 2 ; i++)
  {
    for(int j = 0 ; j < 2 ; j++)
    {
      cout<<array[i][j]<<"\t";
    }
    cout<<endl;
  }
}

void jumlahArray(int array[2][2])
{
  int jumlah = 0;
  for(int i = 0 ; i < 2 ; i++)
  {
    for(int j = 0; j <2 ;j++)
    {
      jumlah = jumlah + array[i][j];
    }
  }

  cout<<"maka hasil jumlah : "<<jumlah<<endl;
}


int main(){

  int array1[10];
  int array2[2][2];
  int array3[2][2] = { {10,9} , {11,10}  };



  tampilArray(array3);
  jumlahArray(array3);


}

/*      0   1
    0   10  9
    1   11  10

*/
