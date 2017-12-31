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
void send(string message, string username){
int msg;
fout<<generateHash(msg)<<endl;
}
int main(){
string username;
string message;
cout<<"KI VAGY?"
cin>>username;
cout<<"UDV";
while(1){
    cin>>message;
    send(message, username);
}
}

