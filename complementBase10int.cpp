#include<iostream>

using namespace std;
class conversion{
public :
        int compl(int n)
        {
            int mask=0;
            int m=n;

            if (n==0)
            {
                return 1;
            }
            
            while (m!=0)
            {
                mask=(mask<<1)|1;
                m=m>>1;
            }
            int ans = (~n) & mask;
            return ans;
            
        }
};
int main()
{
    conversion c1;

    int num;
    cin>> num;
    int value = c1.compl(num);
    cout << value << " ";
    return 0;
}