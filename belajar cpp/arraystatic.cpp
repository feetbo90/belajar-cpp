
#include <iostream>

using namespace std;

int main(){

  // deklarasi array static
  int bilanganbulat[] = { 2, 4, 3, 6 };

  cout<<bilanganbulat[3]<<endl;
  bilanganbulat[3] = 100;

  cout<<"Data berubah : "<<bilanganbulat[3]<<endl;



}

/*x
  size = 4

  2  4  3  6


  index

  0  1  2  3


*/
