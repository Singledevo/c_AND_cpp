/* find the right most key of the similar element in a array by binary search*/
#include<iostream>
using namespace std;

class searchElement{
    public:
            int getElement(int numbs[],int key, int size)
            {
                int start=0;
                int end= size-1;
                int result=-1;
                while (start <= end)
                {
                    int mid = (start + end)/2;
                    if (numbs[mid]==key)
                    {
                        result =mid;
                        start = mid +1;
                    }else if (numbs[mid] > key)
                    {
                        end= mid-1;
                    }
                    else
                    {
                        start= mid+1;
                    }

                }
                
                return result;
            }

};
int main()
{
    int key, size =6;
    cin >> key;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    searchElement se1;
    int index= se1.getElement(arr, key, size);
     cout << index;

    return 0;
}
