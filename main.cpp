#define START 0x10
#define STOP 0xFF
#define STARTUSERNAME 0x11
#define STOPUSERNAME 0x12
#define STARTMESSAGE 0x13
#define STOPMESSAGE 0x14

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int generateHash(int num)
{
 int sum=0;
 int rem;
 int i=1;
 int szr=5;
 while(num>0)
 {
 rem=num%szr;
 sum=sum+(rem*i);
 i*=10;
 num=num/szr;
 }
 return sum;
}
int main(){
string username;

cout<<generateHash(sz);
}

