# include <iostream>
# include <string.h>

using namespace std;

struct test
{
char str[20];
};

int main()
{
struct test st1, st2;

strcpy(st1.str, "GeeksforGeeks");

st2 = st1;

st2.str[0] = 'X';
st2.str[1] = 'Y';

/* Since copy was Deep, both arrays are different */
cout << "st1's str = " << st1.str << endl;
cout << "st2's str = " << st2.str << endl;

return 0;
}
