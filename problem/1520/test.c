a[501][501];b[501][501];i;j;c;n;m;
f(i,j)
{
  if(j>0&&a[i][j]<a[i][j-1])f(i,j-1);
  if(j<n-1&&a[i][j]<a[i][j+1])f(i,j+1);
  if(i>0&&a[i][j]<a[i-1][j])f(i-1,j);
  if(i<m-1&&a[i][j]<a[i+1][j])f(i+1,j);
  if(i==0&&j==0)c++;
}
main()
{
  for(scanf("%d%d",&m,&n);i<m;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);
  for(i=0;i<m;i++,puts(""))for(j=0;j<n;j++)
  {
    if(j>0&&a[i][j]>a[i][j-1])b[i][j]++;
    if(j<n-1&&a[i][j]>a[i][j+1])b[i][j]++;
    if(i>0&&a[i][j]>a[i-1][j])b[i][j]++;
    if(i<m-1&&a[i][j]>a[i+1][j])b[i][j]++;
    printf("%d ",b[i][j]);
  }
  f(m-1,n-1);printf("%d",c);
  while(1);
}