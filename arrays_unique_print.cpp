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
        int arr[] = {8,4,18,3,7,7,9};
        int sizearr = sizeof(arr)/sizeof(arr[0]);
        /*reverse(arr,sizearr);
        for(int i = 0; i<sizearr; i++)
        {
                cout<<arr[i]<<"   ";
        }*/
        cout<<"\nUnique values\n";
        for(int i = 0; i<sizearr;i++)
        {
                int j;
                for( j = 0; j<sizearr;j++)
                {
                        if(j==i)
                        {
                                continue;
                        }
                        if(arr[j]==arr[i])
                        {
                                break;
                        }
                }
                if(j==sizearr)
                cout<<arr[i]<<"   ";
        }
        return 0;
        
}
