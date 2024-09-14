/*
pattern
1
22
333
4444
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int row=1;
    while (row<=n)
    {
        int column=1;

        cout<< " ";
        while (column<=row)
        {
            cout<<row<<" ";
            column++;
        }
        cout<<endl;
        row++;
        
    }

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout <<i<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}