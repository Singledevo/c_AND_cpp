#include<iostream>
#include<math.h>

using namespace std;
class conversion{
public: 
        void binarytodecimal(int n)
        {
            int ans=0;
           for (int i = 0; n!=0; i++)
           {
            
            int rem = n % 10;
            
            ans= (rem * pow(2,i))+ans;
            n=n/10;
           }
           cout<<ans<<" ";
        }
};
int main()
{
    int num;
    cin >>num;
    conversion c1;
    c1.binarytodecimal(num);

    return 0;
}