#include <iostream>

using namespace std;

int main() { 
	string msg,crc,encoded_msg="";
	cout <<"Enter the message: ";
	getline(cin,msg);
	cout <<"Enter the divisor: ";
	getline(cin,crc);
	int m=msg.length(),n=crc.length();
	encoded_msg+=msg;
	for(int i=1;i<=n-1;i++) {
   	    encoded_msg+='0';
    	for(int i=0;i<=encoded_msg.length()-n; ){
        	for(int j=0;j<n; j ++)
            	encoded_msg [i+j] = encoded_msg[i+j] == crc[j]? '0':'1';
            	for(;i<encoded_msg.length() && encoded_msg[i]!='1';i++); 
    	}
    }
    cout << "Encoded CRC:" << msg+encoded_msg.substr(encoded_msg.length()-n+1);
    return 0;
}
