#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n,m,i,j,k,l;
    char arr[1999][1999];
   // char arr1[1000][1000];
   int flag=0,count=0,count1=0;

    cin>>n>>m;

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            cin>>arr[i][j];
            if(arr[i][j]=='.')
            count++;
        }
    }
	if(count==n*m){
		cout<<"yes"<<endl;
		return 0;
	}
	//cout<<n<<endl<<m<<endl;

    for(k=1; k<=n-2; k++){
        for(l=1; l<=m-2; l++){
			//cout<<flag<<endl;
			if(arr[k][l]=='*'){
				continue;
			}
            if(arr[k][l]=='#'){
                if(arr[k+1][l+1]=='.'){//check case4 here
                    if(arr[k][l+1]=='#' && arr[k][l+2]=='#' && arr[k+1][l]=='#' && arr[k+1][l+2]=='#'&& arr[k+2][l]=='#'&& arr[k+2][l+1]=='#'&& arr[k+2][l+2]=='#'){
                                flag=1;
                                //cout<<flag<<endl;
								arr[k][l+1]='*';
								arr[k+1][l]='*';
								
								if(l==m-3 && flag==1){
									if(arr[k][m]=='#'){
										cout<<"NO"<<endl;
										return 0;
									}
								}
								
                                //cout<<flag<<"f"<<endl;
                        }
				
                    }else  if(arr[k][l+1]=='#' && arr[k][l+2]=='#' && arr[k+1][l]=='#' && arr[k+1][l+2]=='#'&& arr[k+2][l]=='#'&& arr[k+2][l+1]=='#'&& arr[k+2][l+2]=='#'){//eikhane check kora 
							if(arr[k+3][l]=='#' && arr[k+3][l+1]=='#' && arr[k+3][l+2]=='#'){
							flag=1;
							arr[k][l+1]='*';
							arr[k+1][l]='*';
							//cout<<n<<endl;
							if(k+3>=n)break;
							} 
							
							else if(arr[k][l+3]=='#' && arr[k+1][l+3]=='#' && arr[k+2][l+3]=='#'){
								arr[k][l+1]='*';
								arr[k+1][l]='*';
								flag=1;
								//cout<<flag<<endl;
								if(l+3>=m)break;
							}
                    }else  if(arr[k][l+1]!='#' || arr[k][l+2]!='#' ||  arr[k+1][l]!='#' || arr[k+1][l+2]!='#'||arr[k+2][l]!='#'|| arr[k+2][l+1]!='#'|| arr[k+2][l]!='#' || arr[k+2][l+1]!='#' ||arr[k+2][l+3]!='#'){
						//flag=0;
						if(arr[k][l+2]=='.' && l+2<=m){
							flag=1;
							//cout<<flag<<endl;
						}else if(arr[k+2][l]=='.' && k+2<=n){
							flag=1;
						}else{
							cout<<"no"<<endl;
							return 0;
						}
                }else{
                    count1++;
                    
                }

        }
    }
}
	
	
    if(flag==1){
        cout<<"yes"<<endl;
    }else if(flag==0){
        cout<<"no"<<endl;
    }

    return 0;
}
