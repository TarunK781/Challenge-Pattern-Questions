#include <iostream>

using namespace std;
class Solution {
  public:
    void printTriangle(int n) {
       for(int i=0;i<n;i++)
{
            for(int j=n;j>i;j--)
                cout<<"*";
            for(int j=0;j<2*i;j++)
                cout<<" ";
            for(int j=n;j>i;j--)
                cout<<"*";
            cout<<"\n";
}
        for(int i=1;i<=n;i++)
{
            for(int j=1;j<=i;j++)
                cout<<"*";
            for(int j=2*(n-i);j>0;j--)
                cout<<" ";
            for(int j=1;j<=i;j++)
                cout<<"*";
            cout<<"\n";
}
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
