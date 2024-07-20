#include<bits/stdc++.h>
#include<iostream>
using namespace std;
    string losingPlayer(int x, int y) {
        int result = 0 , count = 0;
        while(x>=1 && y>=4){
            x-=1;
            y-=4;
            count++;
        }
        if((x>= 1 && y>=4)) {
            count++;    
        }
        return (count%2 == 1) ? "Alice" : "Bob";
    }

int main(){
	cout<<losingPlayer(2,7)<<endl;
	return 0;
}
