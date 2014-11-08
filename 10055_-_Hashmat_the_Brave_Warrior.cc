#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   long input1, input2;
   while (cin >> input1 >> input2)
   {
      cout << abs(input1-input2) << endl;
   }
}
