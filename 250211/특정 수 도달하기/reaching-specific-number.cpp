#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[9];
    int n=0;
    int sum=0;

    for(int i=0;i<10;i++){
        cin >> n;
        if(n>=250){    
            double avg=(double)sum/i;
            cout << sum << " " << avg;
            break;
        }
        sum+=n;
        if(i==9){
            cout << sum << " " << sum/10;
            break;
        }
        

    }
    return 0;
}