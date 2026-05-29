#include<iostream>
using namespace std;
void swap(int*a, int* b)
{
        int temp = *a;
        *a = *b;
        *b = temp;

}
void reverse(int array[], int size)
{
        int* first = array;
        int* last = first + size-1;
        while(first<last)
        {
                swap(first,last);
                first++;
                last--;
        }
}
int main()
{
        int arr[] = {8,4,1,5,3,6,7,9};
        int sizearr = sizeof(arr)/sizeof(arr[0]);
        reverse(arr,sizearr);
        for(int i = 0; i<sizearr; i++)
        {
                cout<<arr[i]<<"   ";
        }
        return 0;
        
}
