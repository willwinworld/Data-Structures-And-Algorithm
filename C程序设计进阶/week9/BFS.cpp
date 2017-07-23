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
�����������
@param Vs ���
@param Vd �յ� 
*/
bool BFS(Node& Vs, Node& Vd){
	queue<Node> Q; // ��������Ķ��� 
	Node Vn, Vw;  // Vn�ǴӶ�����ȡ���ģ�Vm��Vn�����ڽڵ� 
	int i;
	
	// ���ڱ����ɫ��visit[i][j] == trueʱ��˵���ڵ���ʹ���Ҳ���Ǻ�ɫ
	bool visit[MAXL][MAXL];
	
	// �ĸ�����
	int dir[][2] = {
		{0, 1}, {1, 0},
		{0, -1}, {-1, 0}	
	};
	
	// ��ʼ״̬�����Ž�����Q
	Q.push(Vs);
	visit[Vs.x][Vs.y] = true;  // ���ýڵ��Ѿ����ʹ��ˣ�
	
	while (!Q.empty()){  // ���в�Ϊ�գ����������� 
		// ȡ�����е�ͷVn
		Vn = Q.front();
		Q.pop();
		
		for (i = 0; i < 4; ++i){
			Vw = Node(Vn.x+dir[i][0], Vn.y+dir[i][1]);  // �������ڽڵ�
			
			if (Vw == Vd){  // �ҵ��յ��ˣ� 
				//��·����¼������û�����㷨
				return true; // ���� 
			}
			
			if (isValid(Vw) && !visit[Vm.x][Vm.y]){
				// Vw��һ���Ϸ��Ľڵ㲢��Ϊ��ɫ�ڵ�
				Q.push(Vw); // �������Q
				visit[Vw.x][Vw.y] = true; //���ýڵ���ɫ 
			}			
		} 
	}
	return false; // �޽� 
}

/*
BFS���Ĵ���
@param Vs ���
@param Vd �յ� 
*/
bool BFS(Node& Vs, Node& Vd){
	queue<Node> Q;
	Node Vn, Vw;
	int i;
	
	//��ʼ״̬�����Ž�����Q
	Q.push(Vs);
	hash(Vw) = true;  // ���ýڵ��Ѿ����ʹ���!
	/*����һ����Ŀ��˵��Ҫ��־�ڵ��Ƿ���ʹ�����������һ�ֺܿ��ٵķ���������ʱ������̫�󣬺�����һ������������¼ʱ������hash����õ�������ʵ����visit����������Ҳ�ǳ䵱hash�����á���PS������hash��ʲô�����Լ�ȥ�˽⣬������������O(1)��ʱ�临�Ӷ���ȡ��ĳ��ֵ��*/
	
	while (!Q.empty()){  // ���в�Ϊ�գ���������! 
		//ȡ�����е�ͷVn
		Vn = Q.front();
		
		//�Ӷ������Ƴ�
		Q.pop();
		
		while(Vw = Vn){  // ͨ��ĳ�����ܹ�����Ľڵ�, Vn�ǴӼ�������Ķ�����ȡ����, Vw��Vn�����ڽڵ� 
			if (Vw == Vd){   // �ҵ��յ��ˣ� 
				// ��·����¼������û�и����ⷨ
				return true; 
			}
			
			if (isValid(Vw) && !visit[Vw]){
				// Vw��һ���Ϸ��ڵ㲢��Ϊ��ɫ�ڵ�
				Q.push(Vw); // �������Q
				hash(Vw) = true; // ���ýڵ���ɫ 
			}
		} 
	}
	return false; // �޽� 
} 
