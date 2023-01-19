#include<iostream>
using namespace std;

double solve(int x, int n) {

    static double p = 1;  // for power
    static double f = 1;  // for factorial

    if (n == 0) {

        return 1;

    } else {

        double r = solve(x, n-1);

        p = p * x;
        f = f * n;

        return r + p/f;

    }

}

int main()
{
    int x, n;

    cout<<"Enter the value of x and n\n";
    cin>>x>>n;

    cout<<solve(x, n)<<endl;


    return 0;
}
