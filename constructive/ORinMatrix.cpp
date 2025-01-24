// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void makeAzero(vector<vector<int>> &A,int r,int c,int m,int n){
//     for(int i=0;i<m;i++) A[i][c]=0;
//     for(int i=0;i<n;i++) A[r][i]=0;
// }

// bool checkAllOne(vector<vector<int>> B,int r,int c,int m,int n){
//     bool row=true,col=true;
//     for(int i=0;i<m;i++) col = col && (B[i][c]==1);
//     for(int i=0;i<n;i++) row = row && (B[r][i]==1);

//     return row && col;
// }

// int main(){
//     int m,n;
//     cin>>m>>n;
//     string ans="YES";
//     vector<vector<int>> A(m,vector<int>(n,1));
//     vector<vector<int>> B(m,vector<int>(n));

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>B[i][j];
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(B[i][j]!=1) makeAzero(A,i,j,m,n);
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(A[i][j]==1) {
//                 if(!checkAllOne(B,i,j,m,n)){
//                     ans="NO";break;
//                 }
//             }
//         }
//     }

//     cout<<ans<<endl;
//     if(ans=="YES"){
//          for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 cout<<A[i][j]<<" ";
//             }
//             cout<<endl;
//         }

//     }


//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
  
  /*
 YES
 A
1 0 1  
0 0 0

B
1 1 1
1 0 1

  */
  
  int n,m;
  cin>>m>>n;
  int A[m][n],B[m][n];
  
  for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
      A[i][j]=1;

  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cin>>B[i][j];
          if(B[i][j]==0){
              for(int k=0;k<n;k++)
              A[i][k]=0;
              for(int k=0;k<m;k++)
              A[k][j]=0;
          }
      }
  }
  
  // A-> B
  // checking 1s
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          if(A[i][j]==1){
              int sum=0;
              for(int k=0;k<m;k++)
              sum+=B[k][j];
              for(int k=0;k<n;k++)
              sum+=B[i][k];
              if(sum!=(m+n)){
                  cout<<"NO";
                  return 0;
              }
              
          }
      }
  }
  
  cout<<"YES"<<endl;
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++)
      cout<<A[i][j]<<" ";
      cout<<endl;
    }
  
  
  
   
  
   return 0;

}