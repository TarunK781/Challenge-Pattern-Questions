#include <iostream>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        int a = 1;
         for (int i = 0; i < n; i++){
             for (int j = 0; j <= i; j++){
                 cout<<a;
                 cout<<" ";
                 a++;
             }
             cout<<"\n";
         }
    }
};


int main() {
    Solution obj1;
    obj1.printTriangle(5);
    return 0;
}