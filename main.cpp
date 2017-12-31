#define START 0x10
#define STOP 0xFF
#define STARTUSERNAME 0x11
#define STOPUSERNAME 0x12
#define STARTMESSAGE 0x13
#define STOPMESSAGE 0x14

#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
ofstream fout("out.msg");
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
void sendTEXT(string txt){
char a[txt.length()+1];
strcpy(a, txt.c_str());
for(int i=0; i<txt.length(); i++){
fout<<generateHash((int)a[i]);
}
}
void send(string message, string username){
fout<<START;
fout<<STARTUSERNAME;
sendTEXT(username);
fout<<STOPUSERNAME;
fout<<STARTMESSAGE;
sendTEXT(message);
fout<<STOPMESSAGE;
fout<<STOP<<endl;
}
int main(){
string username;
string message;
cout<<"KI VAGY?"<<endl;
cin>>username;
cout<<"UDV"<<endl;
while(1){
    cin>>message;
    send(message, username);
}
}

