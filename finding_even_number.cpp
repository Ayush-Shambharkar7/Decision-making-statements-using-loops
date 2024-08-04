#include<iostream>
using namespace std;
int main(){
    int i ,n;
    cout << "enter the value od n:";
    cin >> n;
    for  (i = 0; i <= n; i++)
    {
        if (i%2==0)
        {
            cout << i << endl ;
        }   
    }
    return 0;
}

/*
OUTPUT
enter the value od n:20
0
2
4
6
8
10
12
14
16
18
20
*/