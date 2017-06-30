#include<stdio.h>
#include<stdlib.h>
#define N 9
typedef struct Node{
	int v;
	int e;
	struct Node *next;
}Node,*LinkedNode;

void ajdacencyList() {
	LinkedNode adj[N];
	int i,V,E,u,v,e;
	for(i=1;i<N;i++){
		adj[i]=NULL;
	}
	FILE *f=fopen("graph.txt","r");
	fscanf(f,"%d%d",&V,&E);
	for(i=1;i<=E;i++){
		fscanf(f,"%d%d%d",&u,&v,&e);
		LinkedNode p=(Node *)malloc(sizeof(Node));
		p->v=v;
		p->e=e;
		p->next=adj[u];
		adj[u]=p;
		p=(Node *)malloc(sizeof(Node));
		p->v=u;
		p->e=e;
		p->next=adj[v];
		adj[v]=p;
	}
	for(i=1;i<N;i++){
		printf("%c",i+64);
		LinkedNode p=adj[i];
		while(p!=NULL){
			printf("-->%c",p->v+64);
			p=p->next;
		}
		printf("\n");
	}	
}

//int main(){
//	ajdacencyList();	
//}
