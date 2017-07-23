//#include <iostream>
//using namespace std;
//
//
//int main(void){
//	int a[10], i;
//	
//	for (i = 1; i <= 10; i++){
//		a[i] = 0;
//	}
//	
//	return 0;
//	
//}
/*
广度优先搜索
@param Vs 起点
@param Vd 终点 
*/
bool BFS(Node& Vs, Node& Vd){
	queue<Node> Q; // 即将辐射的队列 
	Node Vn, Vw;  // Vn是从队列中取出的，Vm是Vn的相邻节点 
	int i;
	
	// 用于标记颜色当visit[i][j] == true时，说明节点访问过，也就是黑色
	bool visit[MAXL][MAXL];
	
	// 四个方向
	int dir[][2] = {
		{0, 1}, {1, 0},
		{0, -1}, {-1, 0}	
	};
	
	// 初始状态将起点放进队列Q
	Q.push(Vs);
	visit[Vs.x][Vs.y] = true;  // 设置节点已经访问过了！
	
	while (!Q.empty()){  // 队列不为空，继续搜索！ 
		// 取出队列的头Vn
		Vn = Q.front();
		Q.pop();
		
		for (i = 0; i < 4; ++i){
			Vw = Node(Vn.x+dir[i][0], Vn.y+dir[i][1]);  // 计算相邻节点
			
			if (Vw == Vd){  // 找到终点了！ 
				//把路径记录，这里没给出算法
				return true; // 返回 
			}
			
			if (isValid(Vw) && !visit[Vm.x][Vm.y]){
				// Vw是一个合法的节点并且为白色节点
				Q.push(Vw); // 加入队列Q
				visit[Vw.x][Vw.y] = true; //设置节点颜色 
			}			
		} 
	}
	return false; // 无解 
}

/*
BFS核心代码
@param Vs 起点
@param Vd 终点 
*/
bool BFS(Node& Vs, Node& Vd){
	queue<Node> Q;
	Node Vn, Vw;
	int i;
	
	//初始状态将起点放进队列Q
	Q.push(Vs);
	hash(Vw) = true;  // 设置节点已经访问过了!
	/*对于一个题目来说，要标志节点是否访问过，用数组是一种很快速的方法，但有时数据量太大，很难用一个大数组来记录时，采用hash是最好的做法。实际上visit数组在这里也是充当hash的作用。（PS：至于hash是什么？得自己去了解，它的作用是在O(1)的时间复杂度内取出某个值）*/
	
	while (!Q.empty()){  // 队列不为空，继续搜索! 
		//取出队列的头Vn
		Vn = Q.front();
		
		//从队列中移除
		Q.pop();
		
		while(Vw = Vn){  // 通过某规则能够到达的节点, Vn是从即将辐射的队列中取出的, Vw是Vn的相邻节点 
			if (Vw == Vd){   // 找到终点了！ 
				// 把路径记录，这里没有给出解法
				return true; 
			}
			
			if (isValid(Vw) && !visit[Vw]){
				// Vw是一个合法节点并且为白色节点
				Q.push(Vw); // 加入队列Q
				hash(Vw) = true; // 设置节点颜色 
			}
		} 
	}
	return false; // 无解 
} 
