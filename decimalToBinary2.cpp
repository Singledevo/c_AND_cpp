#include<iostream>
#include<math.h>

using namespace std;
class conversion{
public:
        void binary(int n)
        {
            int i=0,ans=0;
            while (n!=0)
            {
               int bit =n&1;
               ans=(bit * pow(10,i))+ans;
               n=n>>1;
               i++;
            }
            cout << ans <<" ";
            


        }
};

int main()
{
    conversion c1;
    int num;
    cin >> num;
    c1.binary(num);

}