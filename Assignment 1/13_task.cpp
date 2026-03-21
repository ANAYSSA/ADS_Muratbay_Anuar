#include<iostream>
using namespace std;
int find(int arr[] , int n,int a) {
if (n==0) return 0;
    if (a == arr[n-1])
    {return 1 + find(arr, n-1,a);}
    else {return find(arr,n-1,a);}

}


int main() {
int n,target;
    cin >> n;
    int ar[n];
for (int i = 0; i < n; i++) {
    cin >> ar[i];
}
    cin >> target;
cout << find(ar, n,target) << endl;


}