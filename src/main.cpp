/*This is a main file of vineyard ||| zxweb*/
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
static int pull(char p, char *fp)
{
    cout << *fp << endl;
    return 0;
}
int main(int argc, char* argv[])
{
    char p; //parameter
    char *fp = &p;
    p = getchar();
    pull(p, fp);
    return 0;
}
