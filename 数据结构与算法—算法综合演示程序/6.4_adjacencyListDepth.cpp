#include<stdio.h>
#include<stdlib.h>
#define L 9
int visited1[L]={0};
int V1,E1,u1,v1,e1;
typedef struct GNode1{
	int v1;
	int e1;
	struct GNode1 *next;
}GNode1,*Glist1;
Glist1 adj1[L];

void dfVisit1(int pre, int u1){
	visited1[u1]=1;
	printf("%c-->",u1+64);
	Glist1 p = adj1[u1];
	while(p!=NULL){
		int v1=p->v1;
		if(visited1[v1]==0)
			dfVisit1(u1,v1);
		p=p->next;
	}	
}

void adjacencyListDepth(){
	FILE *f=fopen("graph.txt","r");
	int i;
	fscanf(f,"%d%d",&V1,&E1);
	for(i=1;i<=E1;i++){
		fscanf(f,"%d%d%d",&u1,&v1,&e1);
		Glist1 p=(GNode1 *)malloc(sizeof(GNode1));
		p->v1=v1;
		p->e1=e1;
		p->next=adj1[u1];
		adj1[u1]=p;
		p=(GNode1 *)malloc(sizeof(GNode1));
		p->v1=u1;
		p->e1=e1;
		p->next=adj1[v1];
		adj1[v1]=p;	
	}
	dfVisit1(0,1);	
}

//int main(){
//	adjacencyListDepth();
//}
