

#include <iostream>
using namespace std;

int arr[20];        //arr to be searched
int n;              //number of elements in the array
int i;              //index of array element

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array:  ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    //Accept array elements
    cout << "\n--------------------\n";
    cout << " Enter array elements \n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
    }
}

void LinearSearch()
{
    char ch;
    int ctr;        //Number of comparisons
    int item;

    do
    {

        cout << "\nEnter the element you want to search: ";
        cin >> item;

        ctr = 0;
        i = 0;
        while (i < n)
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << item << "found at position" << (i + 1) << endl;
                break;
            }
            i++;
        }

        

    } while
}
int main()
{
    
}

