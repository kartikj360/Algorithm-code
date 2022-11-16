#include <iostream>
#include<vector>
using namespace std;

class vals
{
public:
    int pass, compair, swap,size;
    vector <int> array;

    vals()
    {
        pass = 0;
        compair = 0;
        swap = 0;
        array=new <int>(size);
        

    }
};

vals insertionsort(int array[], int n)
{
    int j, temp;
    vals val2;
    


    for (int i = 1; i < n; i++)
    {
        temp = array[i];
        j = i - 1;
        val2.pass++;

        while (j >= 0 && temp < array[j])
        {
            array[j + 1] = array[j];
            j = j - 1;
            val2.compair++;
            val2.swap++;
        }
        array[j + 1] = temp;
        if (temp > array[j])
        {
            val2.compair++;
        }
    }
    return val2;
}

void display(int array[], int n, int cmpr, int passes, int swaps)
{
    cout << "Your sorted data is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
    cout << endl;
    cout << " No. of comparisions perfomed:  " << cmpr << endl;
    cout << "No. of passes performed:  " << passes << endl;
    cout << "No. of swaps:" << swaps << endl;
}

int main()
{
    int size;
    cout << " Enter the size of an array:" << endl;
    cin >> size;
    vals val;

    cout << " Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
        cin >> val.array[i];

    cout << "Your inputed array is:  " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << val.array[i] << "  ";
    }
    cout << endl;
    val = insertionsort(val.array, size);
    display(val.array, size, val.compair, val.pass, val.swap);
    return 0;
}