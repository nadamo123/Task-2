#include<iostream>
using namespace std;

int main() {
	int cnt, result, num;

	cin>>cnt;

	cin>>result;	
	cnt -= 1;

	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}

	cout<<result;

	return 0;
}