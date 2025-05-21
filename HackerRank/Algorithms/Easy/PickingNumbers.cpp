#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int picking_numbers( vector<int>& array)
{
     sort(array.begin(), array.end());

    int result = 0;
    int count = 1;
    int subarray_first_element = array[0];

    for (int i = 1; i < array.size(); ++i)
    {
        if (subarray_first_element == array[i] || subarray_first_element + 1 == array[i])
        {
            count++;
        }
        else
        {
            if (count > result)
            {
                result = count;
            }
            count = 1;
            subarray_first_element = array[i];
        }
    }

    if (count > result)
    {
        result = count;
    }
    return result;
}

int main()
{
    int size_of_array;
     cin >> size_of_array;
     vector<int> array(size_of_array);

    for (int i = 0; i < size_of_array; ++i)
    {
         cin >> array[i];
    }

    int max_count = picking_numbers(array);
     cout << max_count << "\n";
}
