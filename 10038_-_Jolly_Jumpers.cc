#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
   int n, heapSize, number[3000];
   bool flag;
   vector<int> heap;

   while (cin >> n)
   {
      if (n > 1)
      {
         flag = true;
         cin >> number[0];
         for (int i = 1; i < n; i++)
         {
            cin >> number[i];
            heap.push_back(abs(number[i-1] - number[i]));
         }

         make_heap(heap.begin(), heap.end());
         sort_heap(heap.begin(), heap.end());

         if (heap[0] != 1){
            flag = false;
         }

         for (int i = 1; i < heap.size(); i++)
         {
            if (heap[i] - heap[i-1] != 1)
            {
               flag = false;
               break;
            }
         }

         if (flag)
            cout << "Jolly\n";
         else
            cout << "Not jolly\n";

         heap.clear();
      }
      else if (n == 1){
         cin >> number[0];
         cout << "Jolly\n";
      }else
         cout << "Not jolly\n";
   }
}
