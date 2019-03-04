#include <iostream>
#include <string>
using namespace std;
int main(){
	int sum=0,num;
	string str1,str2;
	cin>>str1;
	for(int i=0;i<str1.length();i++){
		sum += (str1[i]-'0');//先这么写，不知道对不对 
	}
	str2 = to_string(sum);
	for(int j=0;j<str2.length();j++){
		num = (str2[j]-'0');
		switch(num){
			case 0:cout<<"zero";
			break;
			case 1:cout<<"one";
			break;
			case 2:cout<<"two";
			break;
			case 3:cout<<"three";
			break;
			case 4:cout<<"four";
			break;
			case 5:cout<<"five";
			break;
			case 6:cout<<"six";
			break;
			case 7:cout<<"seven";
			break;
			case 8:cout<<"eight";
			break;
			case 9:cout<<"nine";
		}
		if(j < (str2.length()-1))
		    cout<<" ";
	}
	return 0;
}
