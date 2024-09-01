#include<stdio.h> 
void waitingTime(int proc[], int n, 
            int bt[], int wt[]) 
{ 
  wt[0] = 0; 
  for (int i=1; i<n; i++) 
    wt[i]=bt[i-1]+wt[i-1] ; 
} 

void TurnAroundTime( int proc[], int n, 
        int bt[],int wt[],int tat[]) 
{ 
  for (int i=0;i<n;i++) 
    tat[i] =bt[i]+wt[i]; 
} 
void findavgTime(int proc[],int n,int bt[]) 
{ 
  int wt[n],tat[n],total_wt=0,total_tat= 0; 
  waitingTime(proc, n, bt, wt); 
  TurnAroundTime(proc, n, bt, wt, tat); 
  printf("| Processes ID | Burst time | Waiting time | Turn around time |\n"); 
  for (int i=0; i<n; i++) 
  { 
    total_wt = total_wt + wt[i]; 
    total_tat = total_tat + tat[i]; 
    printf("     %d ",(i+1));
    printf("            %d ", bt[i] );
    printf("           %d",wt[i] );
    printf("             %d\n",tat[i] ); 
  } 
  float s=(float)total_wt / (float)n;
  float t=(float)total_tat / (float)n;
  printf("Average waiting time = %f",s);
  printf("\n");
  printf("Average turn around time = %f ",t); 
} 
int main() 
{ 
  printf("Please Enter The Number of Process: \n");
  int n;
  scanf("%d",&n);
  int proc[n+1];
  for(int i=1;i<=n;i++){
    proc[i-1]=i;
  }
  printf("Please Enter The %d Brust Time: \n",n);
  int bt[n+1];
  for(int i=0;i<n;i++){
    scanf("%d",&bt[i]);
  }

  findavgTime(proc, n, bt); 
  return 0; 
} 
