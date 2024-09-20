/*find the left most occurence of the key elemnet in binary search array*/

#include<iostream>

using namespace std;
class binarysEARCH{
    public:
   
    
            int leftmost(int num[], int key)
            {
                 int start=0;
                 int end= 6-1;
                 int result =-1;
               while (start<=end)
               {
                int mid= (start+end)/2;
                 if (num[mid]==key)
                {
                    result=mid;
                    end= mid-1;
                    
                }
                else if (num[mid]<key)
                {
                    start= mid+1;
                }
                else
                {
                    end =mid-1;
                }
               }
               return result;
            }
};
int main()
{
    int key;
    cin >> key;
    int arr[6];

    for (int i = 0; i <6; i++)
    {
        cin >> arr[i];
    }

    binarysEARCH obj1;
    int index=obj1.leftmost(arr, key);
    cout << index;
    

    return 0;
}