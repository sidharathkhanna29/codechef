/*
wrong solution
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double r,d,d1,d2,x1,x2,x3,y1,y2,y3;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
        d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        d2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        d=d1+d2;
        if((d1 <= r && d2 <= r) || (d <= r) || (d/2 == r))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
*/

//   sid after solution
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double r,d1,d2,d3,x1,x2,x3,y1,y2,y3;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
        d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        d2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        d3=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
        if((d1<=r && d2<= r) || (d2<=r && d3<= r) || (d3 <= r && d1 <= r))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		double r;
		cin >> r;
		pair<int,int> p[3];
		for(int i=0;i<3;i++){
			int x,y;
			cin >> x >> y;
			p[i] = make_pair(x,y);
		}
		double d1 = sqrt((p[0].first - p[1].first)*(p[0].first - p[1].first) + (p[0].second - p[1].second)*(p[0].second - p[1].second));
		double d2 = sqrt((p[0].first - p[2].first)*(p[0].first - p[2].first) + (p[0].second - p[2].second)*(p[0].second - p[2].second));
		double d3 = sqrt((p[2].first - p[1].first)*(p[2].first - p[1].first) + (p[2].second - p[1].second)*(p[2].second - p[1].second));

		if(d1 <= r && d2 <= r || d1 <= r && d3 <= r || d2 <= r && d3 <= r || d1 <= r && d2 <= r && d3 <= r){
			cout << "yes" << endl;
		}
		else if(d1 > r && d2 > r || d1 > r && d3 > r || d2 > r && d3 > r){
			cout << "no" << endl;
		}
	}
}
*/
