//https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int p=max(a,b);
    int q=max(c,d);
    return max(p,q);
}
    int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
   // cout<<"max_of_four"<<endl;    
    int ans = max_of_four(a, b, c, d);
    //cout<<"max_of_four";
    printf("%d", ans);
    
    return 0;
}
