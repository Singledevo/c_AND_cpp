/*find the maximum element from the mountain aaray(ex : 3 4 5 3 1) after ploting on graph look like a mountain*/

#include<iostream>
using namespace std;
class mountainarray{
    public:
            int maxelement(int arry[], int siz)
            {
                int start=0,end=siz-1;
                int result;
                while (start<end)
                {
                    int mid =(start+end)/2;
                    if (arry[mid]<arry[mid+1])
                    {
                        start=mid+1;
                    }
                    else
                    {
                        end=mid;
                    }
                }
                return start;
            }

};
int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    mountainarray m1;
   int maxelement=m1.maxelement(arr, size);
    cout<< "maximum element in array is at index  " << maxelement<<endl;

    return 0;
}