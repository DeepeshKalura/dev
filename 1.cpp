#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter The Number :";
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int a = 1;
        for(int j =0; j<n; j++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}