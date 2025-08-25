#include <iostream>
using namespace std;
long long fibonacci(int n ){
    int arr[n]={0};
    arr[0]=0;
    arr[1]=1;
    for (int i=2;i< n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}
int main(){
    cout << "Hello world" << endl;
    cout << "mmbELS" << endl;
    cout << "Hello world 2" << endl;
    int n;
    cin >> n;
    cout << "Số fibonacci: " << fibonacci(n) << endl;
    return 0;
}

