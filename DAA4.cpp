// By Kartik Joshi 3932
#include <iostream>
using namespace std;

static int cmpr = 0;
int sz;
void merging(int array[], int l, int mid, int r)
{
    int x = l;
    int y = mid + 1;
    int z = l;

    int temp[sz];
    while (x <= mid && y <= r)
    {
        cmpr++;
        if (array[x] < array[y])
        {
            temp[z] = array[x];
            x++;
        }
        else
        {
            temp[z] = array[y];
            y++;
        }
        z++;
    }

    if (x > mid)
    {
        while (y <= r)
        {
            temp[z] = array[y];
            z++;
            y++;
        }
    }
    else
    {
        while (x <= mid)
        {
            temp[z] = array[x];
            z++;
            x++;
        }
    }
    for (z = l; z <= r; z++)
    {
        array[z] = temp[z];
    }
}

void sorting(int array[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;

        sorting(array, l, mid);
        sorting(array, mid + 1, r);

        merging(array, l, mid, r);
    }
}

int main()
{
    cout << "\nEnter number of elements: ";
    cin >> sz;
    int array[sz];
    cout << "\nEnter the numbers to sort: ";
    for (int x = 0; x < sz; x++)
    {
        cin >> array[x];
    }
    sorting(array, 0, sz - 1);
    cout << "\nArray after Sorting:";
    for (int x = 0; x < sz; x++)
        cout << array[x] << " ";

    cout << "\nTotal Number of Comparison=" << cmpr << endl;
    return 0;
}
