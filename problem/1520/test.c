int m,n;
int map[501][501];
char visit[501][501];
cf(x,y,dx,dy);
f(x,y)
{
  int i;
  visit[x][y]++;
  if(visit[x][y]>1)return visit[x][y]-1;
  if(x==m-1&&y==n-1)return 1;
  return cf(x,y,-1,0)+cf(x,y,1,0)+cf(x,y,0,-1)+cf(x,y,0,1);
}
main()
{
  scanf("%d%d",&m,&n);
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&map[i][j]);
    }
  }
  printf("%d",f(0,0));
}
cf(x,y,dx,dy)
{
  if(x+dx<0||y+dy<0||x+dx>=m||y+dy>=n||map[x][y]<=map[x+dx][y+dy])return 0;
  return f(x+dx,y+dy);
}
