#include <iostream>
#include <iomanip>

void selectionSort(int * const, const int);
void swap(int * const, int * const);

int main()
{
    const int size = 10;
    int a[size] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(a, size);
    //std::cout << *a << std::endl;

    for(int j=0; j<size; j++) 
        std::cout << std::setw( 4 ) << a[ j ];

    std::cout << std::endl;
}

void selectionSort(int * const array, const int arraySize)
{
    int smallest;
    for(int i=0; i<arraySize-1; i++)
    {
        smallest = i;
        for(int j=i+1; j<arraySize; j++)
        {
            if ( array[j] < array[smallest] )
                smallest = j;
        }
        swap( &array[i], &array[smallest]);
    }
}

void swap( int * const elementPtr1, int * const elementPtr2)
{
    //std::cout << "here" << std::endl;
    //std::cout << *elementPtr1 << std::endl;
    //std::cout << hold << std::endl;
    int hold = *elementPtr1;
    *elementPtr1 = *elementPtr2;
    *elementPtr2 = hold;
}