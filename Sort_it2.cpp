#include <iostream>
#include <algorithm>

using namespace std;

// Function to sort the array in descending order
void sort_it(int a[], int n) 
{
    sort(a, a + n, greater<int>());
}

int main() 
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    // Call the function to sort the array
    sort_it(a, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}