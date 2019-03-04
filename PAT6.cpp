#include <iostream>
#include <string>
using namespace std;
int m;
string FID,LID,ID,Ft,Lt,t1,t2;
int main(){
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>ID>>t1>>t2;
		if(i==0){
			FID=ID;
			LID=ID;
			Ft=t1;
			Lt=t2;
		}
		else{
			if(t1<Ft){
				FID = ID;
				Ft = t1;
			}
			if(t2>Lt){
				LID = ID;
				Lt = t2; 
			}
		}
	}
	cout<<FID<<" "<<LID;
//	string str1="02:02:02";
//	string str2="02:02:03";
//	bool r;
//	r = str1<str2;
//	cout<<r<<endl;
	return 0;
} 
