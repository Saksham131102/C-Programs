#include<iostream>
using namespace std;

double solve(int x, int n) {

    double sum;

    if(n == 0)
        return 1;
    else {

        sum = 1;

        for(double i=n ; i>=1 ; i--) {

            sum = (sum * (x/i)) + 1;

        }

    }

    return sum;

}

int main()
{
    int x, n;

    cout<<"Enter x and n\n";
    cin>>x>>n;

    cout<<solve(x, n)<<endl;


    return 0;
}
