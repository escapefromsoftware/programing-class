#include<iostream>
#include<string>

using namespace std;

int a,b,c;

int main()
{
cout << "1‚Â–Ú‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:";
cin >> a;
cout << "2‚Â–Ú‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:";
cin >> b;
cout << "3‚Â–Ú‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:";
cin >> c;
if (a < b && b < c)
{
    cout << a << " < " << b << " < " << c << endl;
}
else if (a < c && c < b)
{
    cout << a << " < " << c << " < " << b << endl;
}
else if (b < a && a < c)
{
    cout << b << " < " << a << " < " << c << endl;
}
else if (b < c && c < a)
{
    cout << b << " < " << c << " < " << a << endl;
}
else if (c < a && a < b)
{
    cout << c << " < " << a << " < " << b << endl;
}
else if (c < b && b < a)
{
    cout << c << " < " << b << " < " << a << endl;
}
}