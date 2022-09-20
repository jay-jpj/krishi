#define MAX 10
#include<stdio.h>
typedef struct queue
{
int q[MAX];
int f,r;
}QUEUE;
void readGraph(int a[MAX][MAX],int n);
void initQueue(QUEUE *pq);
int isEmpty(QUEUE *pq);
void enqueue(QUEUE *pq,int ele);
int dequeue(QUEUE *pq);
void bfs(int a[MAX][MAX],int n,int visited[MAX],int source);
int main()
{
int a[MAX][MAX],n,visited[MAX]={0},source;
printf("Enter the no. of vertices\n");
scanf("%d",&n);
printf("Enter the values to adj matrix\n");
readGraph(a,n);
printf("Enter the source\n");
scanf("%d",&source);
printf("BFS traversal or vertices reachable from %d\n",source);
bfs(a,n,visited,source);
}
void readGraph(int a[MAX][MAX],int n)
{
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
void initQueue(QUEUE *pq)
{
pq->f=0;
pq->r=-1;
}
int isEmpty(QUEUE *pq)
{
return pq->f > pq->r;
}
void enqueue(QUEUE *pq,int ele)
{
pq->r++;
pq->q[pq->r]=ele;
}
int dequeue(QUEUE *pq)
{
int ele=pq->q[pq->f];
pq->f++;
return ele;
}
void bfs(int a[MAX][MAX],int n,int visited[MAX],int source)
{
QUEUE q; //queue
initQueue(&q);
enqueue(&q,source); //enqueue source
visited[source]=1; //mark source visited
int v;
while(!isEmpty(&q)) //until q is not empty
{
v=dequeue(&q); //dequeue
printf("%d ",v);
for(int i=0;i<n;i++)
{
if(a[v][i] && visited[i]==0)
{
enqueue(&q,i); //enqueue ith vertex
visited[i]=1; //mark ith vertex visited
}
}
}
}