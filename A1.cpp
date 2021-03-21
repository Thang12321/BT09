#include <iostream>
#include <cstring>
using namespace std;

char *concat(const char *a, const char * b)
{
    int x=strlen(a)+strlen(b);

    char *ra;
    ra=new char[x];
    strcpy(ra,a);
   strcat(ra,b);
    return ra;
}
int main()
{
    char a[]="Hello";
    char b[]="World";
  cout<<concat(a,b);
}
