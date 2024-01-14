#include<iostream>
using namespace std;

int binary_search(int k);

int main()
{
    int n, k=4, arr[] = {1,2,3,4,5,6};
    //cin >> n >> k;


    binary_search(int k);

    return 0;

}

int binary_search(int k)
{
    int mid, l=0, r=sizeof(arr[]); 

    while(l<=r)
    {
        mid = (l + r) / 2;
        if(k == arr[mid])
        {
            return mid;
        }
        else if(k > mid)
        {
            l = mid + 1;
        }
        else {
            k = mid - 1;
        }
    }

    while(l>=r)
    {
        return -1;
    }
}