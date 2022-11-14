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


