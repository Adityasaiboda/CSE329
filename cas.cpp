#include <iostream>
using namespace std;

int main()
{
int arr[3][3] = {{1, 2, 3}, {3, 1, 2}, {2, 3, 1}};
string str1, str2;
bool yes = false;
string str[3];
for (int i = 0; i < 3; i++)
{
int row = 0;
for (int j = 0; j < 3; j++)
{
row = row * 10 + arr[i][j];
}
string str1 = to_string(row);
str[i] = str1 + str1;
}
for (int i = 0; i < 3; i++)
{
if ((str[i].substr(2, 3) == str[i + 1].substr(0, 3)))
{
yes = true;
}
}
if (yes)
{
cout << "True";
}
else
{
cout << "False";
}
}
