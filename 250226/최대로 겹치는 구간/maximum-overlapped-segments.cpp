#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int n;
    int k;
    int arr[220]={0,};
    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> n >> k;
        for(int j=n+100;j<k+100;j++){
            arr[j]+=1;
        }
    }
    int answer=0;
    for(int i=1;i<220;i++){
        if(answer<arr[i]){
            answer=arr[i];
        }
    }
    cout << answer;
    return 0;
}