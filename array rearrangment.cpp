#include <iostream> 
using namespace std; 
 
void print_array(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++)  
	{ 
        cout << arr[i] << " "; 
    } 
    cout<<endl; 
} 
 
void rearrange(int arr[], int n)  
{ 
    int i = -1, j = 0; 
    while (j != n) { 
        if (arr[j] < 0)  
		{ 
            i++; 
            int temp = arr[i]; 
            arr[i] = arr[j]; 
            arr[j] = temp; 
        } 
        j++; 
    } 
 
    int pos = i + 1, neg = 0; 
    while (pos < n && neg < pos && arr[neg] < 0)  
	{ 
        int temp = arr[neg]; 
        arr[neg] = arr[pos]; 
        arr[pos] = temp; 
        pos++; 
        neg += 2; 
    } 
 
    cout << "The modified array is: \n"; 
    print_array(arr,n); 
} 
 
int main()  
{ 
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
 
    cout<<"Original Array: \n"; 
    print_array(arr,n); 
 
    rearrange(arr, n); 
 
    cout<<"Array after rearranging in alternating positive & negative items: \n"; 
    print_array(arr,n);  
    return 0; 
}
