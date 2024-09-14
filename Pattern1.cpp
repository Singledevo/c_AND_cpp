/*patter
1 2 3
1 2 3
1 2 3
*/

#include<iostream>

using namespace std;

int main()
{
    int i=1,j=1,n;
    cin >> n;
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }

    // while (i<=n)
    // {
    //     while (j<=n)
    //     {
    //         cout<<j;
    //         j++;
    //     }
        
    //     cout<<endl;
    //     i++;
    // }
    
    

    return 0;
}


