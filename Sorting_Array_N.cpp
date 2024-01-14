// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, i;
//     cin >> n;

//     int Arr[n];
//     for(i=0; i<n; i++)
//     {
//         cin >> Arr[i];
//     }

//     int temp = Arr[0];
//     for(i=0; i<n; i++)
//     {
//         if(Arr[i] < Arr[0])
//         {
//             temp = Arr[i];
//         }
//         cout << temp <<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n);

int main()
{
  int N;
  cin >> N;

  int arr[N];
  for(int i = 0; i < N; i++) 
  {
    cin >> arr[i];
  }

  bubbleSort(arr, N);

  for(int i = 0; i < N; i++) 
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}

void bubbleSort(int arr[], int n)
{
  for(int i = 0; i < n - 1; i++) 
  {
    for(int j = 0; j < n - 1 - i; j++) 
    {
      if(arr[j] > arr[j + 1]) 
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}