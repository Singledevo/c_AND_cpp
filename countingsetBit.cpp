#include<iostream>

using namespace std;
class counting{
public: 
        void setbit(int a, int b)
        {
            int mask=0;
            int setbitA= a | mask;
            int setbitB = b|mask;
            for (int i = setbitA - 1; i >= 0; --i) 
            {
                cout << ((a >> i) & 1);
            }
            cout<<endl;
            for (int J = setbitB - 1; J >= 0; --J) 
            {
                cout << ((b >> J) & 1);
            }
        }
};
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    counting c1;
    c1.setbit(num1,num2);

    return 0;
}