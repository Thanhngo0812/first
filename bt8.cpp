#include <iostream>
using namespace std;

int sum(int n)
{
if(n==0)
return 0;
else
return n+sum(n-1);

}

int main()
{
cout<< sum(5);
}
//cho so n tinh tong tu 1 den n
