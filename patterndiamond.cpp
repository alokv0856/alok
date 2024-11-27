#include<iostream>
using namespace std;
int main(){
    int n;
cin>>n;
for(int i=1;i<=n;i++){
for(int space=n-i;space>=1;space--){
    cout<<" ";
}
for(int j=1;j <= i;j++){
    cout<<"*";
}
for(int m=i-1;m>=1;m--){
    cout<<"*";
}
cout<<endl;
}
for(int i1=1;i1<=n;i1++){
for(int space1 = 1 ; space1 <= i1 ; space1++ ){
    cout<<" ";
}
for(int j1=n-i1;j1>=1;j1--){
    cout<<"*";
}
for(int m1=n-i1;m1>1;m1--){
    cout<<"*";
}
cout<<endl;

}
return 0;
}