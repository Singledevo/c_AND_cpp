/* Tell number of count of the same element in the  sorted array with the help of  binary seach  */

#include<iostream>

using namespace std;

class leftAndRightMost{
public:
       int lestmost(int arrr[], int key, int size )
       {
            int result=-1;
            int start=0, end=size-1;
            while (start<=end)
            {
                int mid= (start+end)/2;
            if (arrr[mid]==key)
            {
                result=mid;
                end=mid-1;
            }
            else if (arrr[mid]>key)
            {
                end=mid-1;
            }
            else if (arrr[mid]<key)
            {
                start=mid+1;
            }
            // else{
            //     cout << "No such key is present in array";
            //     return -1;
            // }
            
            }
           return result; 
       }

       int rightmost(int arrr[], int key, int size)
       {
            int result =-1, start=0, end=size -1;
            while (start<=end)
            {
                int mid = (start+end)/2;
            if (arrr[mid]==key)
            {
                result =mid;
                start=mid+1;
            }
            else if (arrr[mid]>key)
            {
                end=mid-1;
            }
            else if (arrr[mid]<key)
            {
                start=mid+1;
            }
            // else
            
            // {
            //     return -1;
            // }
            }
           return result; 
       }

};
int main()
{
    leftAndRightMost lr;
    int key,size =6;;
    cin >> key;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int left_index= lr.lestmost(arr, key, size);
    int right_index= lr.rightmost(arr,key,size);
    int count = (right_index - left_index)+1;
    
    cout << "number of count of key "<< key<<" is "<< count<<endl;
    return 0;
}
// problem in code

// input :
//3
//2 2 4 4 5 5

//output:
//number of count of key 3 is 1
