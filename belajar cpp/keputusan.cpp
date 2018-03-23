

/* struktur keputusan if

operator perbandingan
>, < , >= , <=, ==, !=

8 != 7

operator logika


&& (and), || (or)

&&
T && T = T
T && F = F
F && T = F
F && F = F

||
T || T = T
T || F = T
F || T = T
F || F = F



(8 > 7) && (9 != 10) = F
(8 < 7) || (9 == 10) = F


if(tipe data = True)
{

}else{

}
*/

#include <iostream>

using namespace std;


int main(){

  int bilangan1, bilangan2;

  cout<<"============================="<<endl;
  cout<<"Masukkan bilangan pertama"<<endl;
  cin>>bilangan1;
  cout<<"Masukkan bilangan kedua "<<endl;
  cin>>bilangan2;

  if(bilangan1 > bilangan2)
    cout<<"maka "<<bilangan1<<" lebih besar daripada "<<bilangan2<<endl;
  else 
    cout<<"maka "<<bilangan2<<" lebih besar daripada "<<bilangan1<<endl;







}
