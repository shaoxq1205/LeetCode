// example on this
#include <iostream>
using namespace std;

class Dummy {
  public:
    bool isitme (Dummy& param);
};

bool Dummy::isitme (Dummy& param)//Why is here a reference operator &?
{
  if (&param == this) return true;
  else return false;
}

int main () {
  Dummy a;
  Dummy* b = &a;
  cout<<"b's adress is"<<b<<endl;
  if ( b->isitme(a) )
    cout << "yes, &a is b\n";
  return 0;
}