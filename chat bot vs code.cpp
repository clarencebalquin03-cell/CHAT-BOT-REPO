#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
   string text[] = {"Hello! How are you?",
   "How can i help you?",
    "First step, ay wait naging kayo ba? ",
    "Batka mag momove-on kong di naman naging kayo?",
    "\"It ended before it even started ang atake yarn?\""};
   const string txt = "BOT: ";
   const string tx = "User: ";
   string hh;

cout << txt;
for (char c : text[0]) {
    cout << c << flush;
    usleep(50000);
}
cout << endl;

cout << tx;
getline(cin, hh);
cout << txt;
for (char c : text[1]) {
    cout << c << flush;
    usleep(50000);
}
cout << endl;

cout << tx;
getline(cin, hh);
cout << txt;
for (char c : text[2]) {
    cout << c << flush;
    usleep(50000);
}
cout << endl;

cout << tx;
getline(cin, hh);
cout << txt;
for (char c : text[3]) {
    cout << c << flush;
    usleep(50000);
}
cout << endl;

cout << tx;
getline(cin, hh);
cout << txt;
for (char c : text[4]) {
    cout << c << flush;
    usleep(50000);
}
cout << endl;
cout << tx;
getline(cin, hh);
system("start https://youtu.be/Vd4E1wBRhdA?si=hJSA--cmdOid03JI");
    return 0;
}
