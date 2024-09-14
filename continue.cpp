#include<iostream>

using namespace std;
int main()
{

    for (int i = 0; i <=15; i+=2)
    {
        cout<<i<<" ";
        if (i&1)
        {
            continue;    //output : 0 3 5 7 9 11 13 15
        }
        i++;
        
    //     if (i&1)
    // {
    //     continue;   without this output: 0 2 4 6 8 10 12 14 
    // }
    // i++;
    }
    
    
    
}