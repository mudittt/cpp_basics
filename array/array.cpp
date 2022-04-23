#include <iostream>
using namespace std;

// Sum of all Array Elements
// Linear Search
// Binary Search

int binary_search(int *arr, int num)
{
    int start, end, middle;
    start = 0;
    end = 9;

    while (start <= end)
    {
        middle = (start + end) / 2;
        if (arr[middle] == num)
        {
            return middle;
        }
        else if (arr[middle] < num)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int num;
    int A[6] = {2, 4, 5, 6, 7, 8};
    float B[5] = {2.6, 5.6, 3.4, 234323};

    // New type of for loop condition
    // It will go through all elements in array.
    // 'auto' will adjust the data type of x acc to the array
    // for (auto x : B)
    // {
    //     cout << x << endl;
    // }
    int H[10] = {34, 64, 65, 85, 98, 101, 169, 174, 321, 434};
    for (int x : H)
    {
        cout << x << endl;
    }
    cout << "Enter the number you want to search for -> ";
    cin >> num;
    cout << "The entered number is found at the index -> " << binary_search(H, num);
    return 0;
}
