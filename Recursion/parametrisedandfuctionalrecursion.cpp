#include <iostream>
using namespace std;
//to print sum of n number using parametrised recursion
/*
void sum(int i, int num)
{
    if (i < 1)
    {
        cout << num;
        return ;
    }
    return sum(i - 1, num + i);
}
int main()
{
    int n;
    cin >> n;
    sum(n, 0);
    return 0;
}
    */
//to print sum of n number using functional recursion
/*
int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
    */