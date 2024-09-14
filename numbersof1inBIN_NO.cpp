#include<iostream>

using namespace std;
int a;
class onscount
{
    public:
            void numberCount(int n)
            {
             for (int i = 0; i < 31; i++)
             {
                   if (n&1)
                {
                    a++;
                }
                n=n>>1;
             }
             
                
            }


};
int main()
{
    onscount b1;
    int num;
    cin >> num;
    b1.numberCount(num);
    cout<<a<<endl;

    return 0;
}