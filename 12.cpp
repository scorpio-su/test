//#include<iostream>
#include<bits/stdc++.h>
#define ar array
using namespace std;
int main() {
    ar <int,10> ans ={3,3,2,1,1,3,2,4,2,1};
    int x[4][10]={{1,1,1,1,1,3,2,4,2,1},
            {3,1,2,1,4,3,2,3,2,1},
            {1,3,2,1,2,3,2,2,2,2},
            {1,3,2,1,1,3,2,4,1,1}
                };
    int sum1[4];
    memset(sum1, 0, sizeof(sum1));
    bool test = false;
    for (int i = 0; i <10;i++) {
        if(i>4) test = true;
        for (int j = 0; j <4; j++){
            if (x[j][i]==ans[i]){
                //cout << j+1 << '\n';
                if (test) sum1[j]+=15;
                else sum1[j]+=5;
            }
        }
        //cout << i+1 <<"-------\n";
    }
    int index=0,max1=sum1[0];
    cout <<  sum1[0] ;
    for (int i = 1; i <4; i++) {
            cout << ' ' << sum1[i] ;
            if(max1<sum1[i]){
                max1 = sum1[i];
                index = i;
            }
    }
    cout << '\n' << index+1 << '\n';
}