#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    string a;
    cin>>n;
    while(n--)
    {
      int b[1001]={0};
        int fla=0,max=0;
        cin>>a;
        for(int i=0; i<a.size(); i++)
        {
            b[a[i]-'a']++;//เล
        }
        max=b[0];
        for(int i=0; i<26; i++)
        {
            if(b[i]>max)
            {
                max=b[i];
                fla=i;
            }
        }
        cout<<(char)(fla+'a')<<endl;
    }
    return 0;
}
