#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int height[n];

    for(int i=0;i<n;i++){
        cin >> height[i];
    }

    int max=0;
    int breath;
    
    for(int y=0;y<n;y++){
        for(int x=(y+1);x<n;x++){
            breath = x-y;
            if(height[x]>=height[y]){                

                if((height[y]*breath)>max){
                    max = (height[y]*breath);
                }
            }
            else{
                if((height[x]*breath)>max){
                    max = (height[x]*breath);
                }
            }
        }
    }
    cout << max;
   
}