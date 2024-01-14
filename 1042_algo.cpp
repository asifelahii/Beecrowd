//Accepted
#include<iostream>
using namespace std;

int main()
{
    int i, j, temp;
    
    int arr[3];//Original array, arr[n]
    int arrCopy[3];//Clone of arr[n]
    
    for(i=0; i<3; i++)
    {
        cin >> arr[i];//Taking input for arr[n]
        arrCopy[i] = arr[i];//Making clone of arr[n]
    }
    
    //Selection sort logic
    for(i=0; i<3-1; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    //Displaying sorted arr[n]
    for(i=0; i<3; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;

    //Displaying original arr[n] || Displaying clone of arr[n]
    for(i=0; i<3; i++)
    {
        cout << arrCopy[i] << endl;
    }

    return 0;
}