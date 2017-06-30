#include<stdio.h>
#include<stdlib.h>
#define N 9
void adjacencyMatrix(){
	int adj[N][N]={0};
	int V,E,i,j,u,v,e;
	FILE *f=fopen("graph.txt","r");
	fscanf(f,"%d%d",&V,&E);
	for(i=1;i<=E;i++){
		fscanf(f,"%d%d%d",&u,&v,&e);
		adj[u][v]=adj[v][u]=e;
	}
	for(i=1;i<N;i++){
		for(j=1;j<N;j++)
			printf("%d ",adj[i][j]);
		printf("\n");
	}
	fclose(f);	
}

//int main(){
//	adjacencyMatrix();	
//}
