#include <iostream>
using namespace std;

class base //parent
{
    protected:
      int i;
    public:
      base(int x)
      {
        i=x;
        cout << "Constructing base.\n";
      }

      ~base(void) {cout << "Destructing base.\n";} //free up memory
 };

class derived : public base //child
{
   int j;

   public:
   derived(int x, int y): base(y)
   {
     j=x;
     cout << "Constructing derived.\n";
   }

   ~derived(void) {cout << "Destructing derived.\n";} //free up memory

   void show(void) {cout << i << ", " << j << endl;}
 };

 

int main(void)
{
   derived object(3,4);
   object.show();
   return 0; 
}

 