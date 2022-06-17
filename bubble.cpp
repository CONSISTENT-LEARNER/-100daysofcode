#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int> arr{1,7,2,90,12};
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size()-i-1;j++){
                if(arr[j]>arr[j+1])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
            }
        }
        for(int i:arr)
            cout<<i<<" ";
}