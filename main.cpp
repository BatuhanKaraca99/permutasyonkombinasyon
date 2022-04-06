#include <iostream>
using namespace std;

int main() {
  int n,k,f=1,t=1,z=1;
  cout << "Permutasyon ve Kombinasyon Hesaplayici. \n\n";
  cout << "---------------------------------\n";
  cout << "n değerini giriniz: ";
  cin >> n;
  cout << "k değerini giriniz: ";
  cin >> k;
  
  for(int a=1;a<=n;a++){
    f *= a;
  }

  for(int b=1;b<=(n-k);b++){
    t *= b;
  }

  for(int c=1;c<=k;c++){
    z *= c;
  }
   cout << "Permutasyon Sonucu: " << f/t << endl;
   cout << "Kombinasyon Sonucu: " << f/(z*t);
} 