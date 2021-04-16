#include <iostream>
using namespace std;

int fatorial(int n);

int main() {
  cout << "Hello World!\n";

  int resultado = fatorial(5);
  
  cout << resultado;
}


int fatorial(int n)
{
  int aux;
  cout << n ;

  if(n == 1){
    return (1);
  }else{
    aux = n * fatorial(n - 1);
    cout << " " << aux << endl;
    return (aux);
  }
}