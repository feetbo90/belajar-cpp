#include <iostream>
using namespace std;

int main()
{
  int bilangan, hasil;
  cout<<"masukkan bilangan : ";
  cin>>bilangan;
  int faktorial = 1;
  cout<<bilangan<<"! =";
  for (int i = bilangan; i >= 1; i--) {
    faktorial = faktorial * i;

    if(i > 1)
    {
      cout<<i<<" * ";
    }else if(i == 1){
      cout<<i<<" = "<<faktorial<<endl;
    }

  }

//  cout<<faktorial;

}



/*
  5
  5! = 5 * 4 * 3 * 2 * 1 = 120

3! = 3 * 2 * 1 = 6
i = 3
faktorial = 1
faktoial = 1 * 3 = 3
cout = 3 *

i = 2
faktorial = 3
faktorial = 3 * 2 = 6
cout = 6 *

i = 1
faktorial = 6
faktorial = 6 * 1 = 6
cout 1 = 6


i = 1

  fakorial = 1
  faktorial = 1 * 1 = 1
  i = 2
  faktorial = 1
  faktorial = 1 * 2 = 2
  i = 3
  faktorial = 2
  faktorial = 3 * 2 = 6
*/
