#include<stdio.h>
#define N 9
int adj[N][N]={0};
int visited[N]={0};
int V,E,u,v,e;

void dfVisit(int u){
	visited[u]=1;
	printf("%c-->",u+64);
	int i=1;
	for(i=1;i<=V;i++){
		if(adj[u][i]!=0&&visited[i]==0)
			dfVisit(i);
	}	
}

void adjacencyMatrixDepth(){
	FILE *f=fopen("graph.txt","r");
	int i;
	fscanf(f,"%d%d",&V,&E);
	for(i=1;i<=E;i++){
		fscanf(f,"%d%d%d",&u,&v,&e);
		adj[u][v]=adj[v][u]=e;
	}
	dfVisit(1);}

//int main(){
//	adjacencyMatrixDepth();
//}
