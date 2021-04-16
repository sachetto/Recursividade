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
  if(n == 1){
    return (1);
  }else{
    return (n * fatorial(n - 1));
  }
}