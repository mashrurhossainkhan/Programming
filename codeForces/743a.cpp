#include <bits/stdc++.h>
int main(){
	int airport,me,destination;
	char company[100005];
	scanf("%d%d%d", &airport, &me, &destination);
	scanf("%s",company);
	if(company[me-1]==company[destination-1]){
		printf("0\n");
	}else{
		printf("1\n");
	}

	return 0;
}
