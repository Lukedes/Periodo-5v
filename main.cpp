#include <iostream>
short x;
short s=0,m=0,o=0,g=0;
using namespace std;
int main(int argc, char** argv) {
	cout<<"Quanto dura il primo periodo? (G,O,M,S)";
	cin>>x;
	g=g+x;
	cin>>x;
	o=o+x;
	cin>>x;
	m=m+x;
	cin>>x;
	s=s+x;
	cout<<"Quanto dura il secondo periodo? (G,O,M,S)";
    cin>>x;
    g=x+g;
    cin>>x;
    o=o+x;
    cin>>x;
    m=m+x;
    cin>>x;
    s=s+x;
    if (s>60) {
    	x=s/60;
		s=s-(x*60);
    	m=m+x; }
	else {
	}
	
	if (m>60) {
    	x=m/60;
    	m=m-(x*60);
    	o=o+x; }
	else {
	}
	
	if (o>24) {
    	x=o/24;
    	o=o-(x*24);
    	g=g+x;}
	else {
	}  
	cout<<"I giorni sono: " <<g <<"\n";
   	cout<<"Le ore sono: " <<o <<"\n";
	cout<<"I minuti sono: " <<m <<"\n";
	cout<<"I secondi sono: " <<s <<"\n";
system("PAUSE");
}
