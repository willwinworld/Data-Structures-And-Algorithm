int main()  
{  
    int t;  
    int m;  
    Headquarter RedHead,BlueHead;  
    scanf("%d",&t);  
    int nCaseNo = 1;  
    while ( t-- ) {  
        printf("Case:%d\n",nCaseNo++);  
        scanf("%d",&m);  
        for( int i = 0;i < WARRIOR_NUM;i++ )  
            scanf("%d", & Warrior::initialLifeValue[i]);  
        RedHead.Init(0,m);  
        BlueHead.Init(1,m);  
        int nTime = 0;  
        while(true) {  
            int tmp1 = RedHead.Produce(nTime);  
            int tmp2 = BlueHead.Produce(nTime);  
            if( tmp1 == 0 && tmp2 == 0)  
                break;  
            nTime++;  
        }  
    }  
    return 0;  
} 