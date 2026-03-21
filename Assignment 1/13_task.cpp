#include<iostream>
using namespace std;
int findCount(int arr[] , int n,int a) {
if (n==0) return 0;
    if (a == arr[n-1])
    {return 1 + findCount(arr, n-1,a);}
    else {return findCount(arr,n-1,a);}

}


int main() {
int n,target;
    cin >> n;
    int ar[n];
for (int i = 0; i < n; i++) {
    cin >> ar[i];
}
    cin >> target;
cout << findCount(ar, n,target) << endl;


}