#include <stdio.h>
int num[26], ans[26];
char s[105];
int min(int a, int b)
{
  if(a<b)
    return a;
  return b;
}
int main()
{
  int n,i,j,found;
  scanf("%d",&n);
  for(i=0;i<26;i++)
    ans[i]=101;
  for(j=0;j<n;j++)
  {
    scanf("%s",s);
    for(i=0;i<26;i++)
      num[i]=0;
    for(i=0;s[i]!='\0';i++)
      num[s[i]-'a']++;
    for(i=0;i<26;i++)
      ans[i]=min(ans[i],num[i]);
  }
  found=0;
  for(i=0;i<26;i++)
    {
      for(j=0;j<ans[i];j++)
      {
        printf("%c",i+'a');
        found=1;
      }
    }
  if(!found)
      printf("no such string");
 
 return 0;
}