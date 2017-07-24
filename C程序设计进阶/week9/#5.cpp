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
//	if (entry.i == exit.i){  // 起点与终点在同行
//		bool block = false;  
//		for (int j=0; j<n; j++){
//			if (arr[entry.i][j] == '#'){
//				block = true;
//				break;
//			}
//		}
//		// 先判断终点与起点的相对位置
//		bool relative = true; 
//		/*
//		relative == true时，终点在起点的右边
//		relative == false时，终点在起点的左边 
//		*/
//		if (entry.i < exit.i){
//			relative = true;
//		}
//		else{
//			relative = false;
//		}
//		if (block == true){  // 如果在同一行有障碍，不能往左或往右走,只能往上或往下走 
//			if (entry.i - 1 < 0){  // 如果起点在最上面，只能往下走了 
//				
//			}
//			else if (entry.i + 1 == m){  // 如果起点在最下面，只能往上走了 
//				
//			}
//			else{  // 如果起点在中间，往上或者往下都可以 
//				
//			} 
//		}
//		else{  // 如果在同一行没有障碍 
//			if (relative){
//				min = exit.j - entry.j;
//			}
//			else{
//				min = entry.j - exit.j;
//			}
//		}
//	}
//	else if (entry.j == exit.j){  // 起点与终点在同列 
//		
//	}
//}
/*写不出来,经过查找，属于图论的广度搜索优先BFS, 深度搜索优先DFS*/
/*
1代表true
0代表false 
*/ 
int ex,ey,n,m;  // ex, ey 终点坐标 n m 行 列 
int dx[4]={0,0,-1,1};  
int dy[4]={1,-1,0,0};  
struct Node{  
    int x,y;  
    int step;          //走到当前点的步数   
}S;  // S起点 
char map[101][101];  // 迷宫输入 
int vis[101][101];  // 是否已经走过 
queue<Node>  q;  // 用于存放即将辐射的队列 
int fun(int x,int y)          //判断这个点是否能走   
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
            if(fun(xx,yy)==1 && vis[xx][yy]==0)  // (xx, yy)是一个合法节点同时没有visit过 
            {  
                vis[xx][yy]=1;  // 设置节点颜色 
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

