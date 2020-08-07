#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <pair<int,int> >team;
	int n,home,away,count=0;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d %d", &home, &away);
		team.push_back(make_pair(home,away));
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j) continue;
			if(team[i].first==team[j].second){
				count++;
			}
		}
	}
	
	printf("%d\n", count);
}
