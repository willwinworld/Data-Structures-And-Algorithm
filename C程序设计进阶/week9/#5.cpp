#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue> 
using namespace std;


//struct point{
//	int i;
//	int j;	
//};
//
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	
//	char** arr = new char*[m];
//	for (int i = 0; i < m; ++i)
//		arr[i] = new char[n];
//	
//	struct point entry;
//	struct point exit;
//	for (int i = 0; i < m; ++i){
//		for (int j = 0; j < n; ++j){
//			cin >> arr[i][j];
//			if (arr[i][j] == 'S'){
//				entry.i = i;
//				entry.j = j;
//			}
//			if (arr[i][j] == 'T'){
//				exit.i = i;
//				exit.j = j;
//			}
//			if (arr[i][j] == '#'){
//				
//			} 
//		}
//	}
//	
////	for (int i=0; i<m; ++i){
////		for (int j=0; j<n; ++j){
////			cout << arr[i][j];
////		}
////		cout << '\n';
////	}
//	int min;
//	if (entry.i == exit.i){  // ������յ���ͬ��
//		bool block = false;  
//		for (int j=0; j<n; j++){
//			if (arr[entry.i][j] == '#'){
//				block = true;
//				break;
//			}
//		}
//		// ���ж��յ����������λ��
//		bool relative = true; 
//		/*
//		relative == trueʱ���յ��������ұ�
//		relative == falseʱ���յ���������� 
//		*/
//		if (entry.i < exit.i){
//			relative = true;
//		}
//		else{
//			relative = false;
//		}
//		if (block == true){  // �����ͬһ�����ϰ������������������,ֻ�����ϻ������� 
//			if (entry.i - 1 < 0){  // �������������棬ֻ���������� 
//				
//			}
//			else if (entry.i + 1 == m){  // �������������棬ֻ���������� 
//				
//			}
//			else{  // ���������м䣬���ϻ������¶����� 
//				
//			} 
//		}
//		else{  // �����ͬһ��û���ϰ� 
//			if (relative){
//				min = exit.j - entry.j;
//			}
//			else{
//				min = entry.j - exit.j;
//			}
//		}
//	}
//	else if (entry.j == exit.j){  // ������յ���ͬ�� 
//		
//	}
//}
/*д������,�������ң�����ͼ�۵Ĺ����������BFS, �����������DFS*/
/*
1����true
0����false 
*/ 
int ex,ey,n,m;  // ex, ey �յ����� n m �� �� 
int dx[4]={0,0,-1,1};  
int dy[4]={1,-1,0,0};  
struct Node{  
    int x,y;  
    int step;          //�ߵ���ǰ��Ĳ���   
}S;  // S��� 
char map[101][101];  // �Թ����� 
int vis[101][101];  // �Ƿ��Ѿ��߹� 
queue<Node>  q;  // ���ڴ�ż�������Ķ��� 
int fun(int x,int y)          //�ж�������Ƿ�����   
{  
    if((x>=0&&x<n&&y>=0&&y<m)&&vis[x][y]==0&&map[x][y]!='#') return 1;  
    else return 0;
}  
int bfs()  
{  
    q.push(S);  
    vis[S.x][S.y]=1;  
    while(!q.empty())  
    {  
        Node top;  
        top=q.front();  
        q.pop();  
        if(top.x==ex&&top.y==ey)  
        {  
            return top.step;  
        }  
        for(int i=0;i<4;i++)  
        {  
            int xx=top.x+dx[i];  
            int yy=top.y+dy[i];  
            if(fun(xx,yy)==1 && vis[xx][yy]==0)  // (xx, yy)��һ���Ϸ��ڵ�ͬʱû��visit�� 
            {  
                vis[xx][yy]=1;  // ���ýڵ���ɫ 
                Node node;  
                node.x=xx,node.y=yy,node.step=top.step+1;  
                q.push(node);  
            }  
        }  
    }  
}  
  
int main()  
{  
    memset(vis,0,sizeof(vis));  
    scanf("%d %d",&n,&m);  
    for(int i=0;i<n;i++)  
    scanf("%s",map[i]);  
    scanf("%d %d %d %d",&S.x,&S.y,&ex,&ey);  
    S.step=0;  
    printf("%d",bfs());  
    return 0;  
}  

