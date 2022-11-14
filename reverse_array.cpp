// #include <iostream>
// using namespace std;

// void reverse (int arr[], int N) {
//     int start = 0;
//     int end = N-1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++; end--;
//     }
// }

// int main() {
// 	int N;
// 	cin >> N;
// 	int A[N];
// 	for (int i = 0; i < N; i++) {
// 	    cin >> A[i];
// 	}
// 	reverse(A,N);
// 	for (int i = 0; i < N; i++) {
// 	    cout << A[i] << " ";
// 	}
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void rvereseArray(int arr[], int start, int end)
// {
// 	while (start < end)
// 	{
// 		int temp = arr[start];
// 		arr[start] = arr[end];
// 		arr[end] = temp;
// 		start++;
// 		end--;
// 	}
// }	

// void printArray(int arr[], int size)
// {
// for (int i = 0; i < size; i++)
// cout << arr[i] << " ";

// cout << endl;
// }

// int main()
// {
//     int n; cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++) {
// 	    cin >> arr[i];
// 	}
// 	rvereseArray(arr, 0, n-1);
// 	printArray(arr, n);
// }
// #include <iostream>
// using namespace std;

// void reverse (int arr[], int N) {
//     int start = 0;
//     int end = N-1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++; end--;
//     }
// }

// int main() {
// 	int N;
// 	cin >> N;
// 	int A[N];
// 	for (int i = 0; i < N; i++) {
// 	    cin >> A[i];
// 	}
// 	reverse(A,N);
// 	for (int i = 0; i < N; i++) {
// 	    cout << A[i] << " ";
// 	}
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// void rvereseArray(int arr[], int start, int end)
// {
// 	while (start < end)
// 	{
// 		int temp = arr[start];
// 		arr[start] = arr[end];
// 		arr[end] = temp;
// 		start++;
// 		end--;
// 	}
// }	

// void printArray(int arr[], int size)
// {
// for (int i = 0; i < size; i++)
// cout << arr[i] << " ";

// cout << endl;
// }

// int main()
// {
//     int n; cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++) {
// 	    cin >> arr[i];
// 	}
// 	rvereseArray(arr, 0, n-1);
// 	printArray(arr, n);
// }
#include <iostream>
using namespace std;

void reverse (int arr[], int N) {
    int start = 0;
    int end = N-1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }
}

int main() {
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++) {
	    cin >> A[i];
	}
	reverse(A,N);
	for (int i = 0; i < N; i++) {
	    cout << A[i] << " ";
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

int main()
{
    int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	rvereseArray(arr, 0, n-1);
	printArray(arr, n);
}
