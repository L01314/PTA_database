#include<stdio.h>
#include<string.h>
struct node
{
	int x,y,s;	
}N[44444];

int n,m,num,ans,book[250][250],kfc[250][250];
char map[250][250];
void bfs(int x,int y,int z);

int main()
{
	while(~scanf("%d%d",&n,&m)){
		num=0;
		int i,j,yx,yy,mx,my;
		for(i=0;i<n;++i){
			scanf("%s",map[i]);
			for(j=0;j<m;++j)
			{
				if(map[i][j]=='@')
					num++;
				else if(map[i][j]=='Y')
				{
					yx=i;yy=j;
				}
				else if(map[i][j]=='M')
				{
					mx=i;my=j;
				}
			}
		}
	ans=0x3f3f3f3f;
	memset(kfc,0,sizeof(kfc));
	bfs(yx,yy,0);
	bfs(mx,my,1);
	printf("%d\n",ans*11);
	}
	return 0;
}
void bfs(int x,int y,int z)
{
	memset(book,0,sizeof(book));
	const int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	int b=0,e=1;
	book[x][y]=1;
	N[0].x=x;N[0].y=y;N[0].s=0;
	while(b<e)
	{
		for(int i=0;i<4&&num;i++)
		{
			int dx=N[b].x+dir[i][0];
			int dy=N[b].y+dir[i][1];
			if(dx<0||dy<0||dx>=n||dy>=m||map[dx][dy]=='#'||book[dx][dy])
				continue;
			book[dx][dy]=1;
			N[e].x=dx;N[e].y=dy;N[e++].s=N[b].s+1;
			if(map[dx][dy]=='0')
			{
				kfc[dx][dy]+=N[b].s+1;
				if(z&&ans>kfc[dx][dy])
					ans=kfc[dx][dy];
			}
		}
		if(!num)
	   break;
		b++;
	}
}
