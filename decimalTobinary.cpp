#include<iostream>

using namespace std;
class converstion{
public:
        void binaryConvertion(int n)
        {
            int store[32];
            int i=0;
            while (n>0)
            {
                store[i]= n%2;
                n=n/2;
                i++;
                
            }
            for (int j = i; j >=0; j--)
            {
               cout << store[j];
            }
            
            
            
        }
};
int main()
{
    converstion ob1;
    int num;
    cin >>num;
    ob1.binaryConvertion(num);
    return 0;
}