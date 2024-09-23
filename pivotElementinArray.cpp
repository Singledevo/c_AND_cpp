#include<iostream>

using namespace std;
class getindex
{
    public:
            int getpivot(int arry[],int size)
            {
                
                int leftsum=0, rightsum, totalsum=0;
                for (int i = 0; i < size; i++)
                {
                    totalsum+=arry[i];
                }
                
                for (int i = 0; i<size; i++)
                {
                    rightsum= totalsum-leftsum -arry[i];
                    if (leftsum==rightsum)
                    {
                        return i;
                    }
                    
                    leftsum +=arry[i];
                }
                return -1;
            }
};
int main()
{
    int arr[]={1,7,3,6,5,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    getindex q1;
    int getpivotindex= q1.getpivot(arr,size);

    cout << "pivot index is  "<< getpivotindex<< endl;
    return 0;
}
