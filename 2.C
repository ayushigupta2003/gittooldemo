   void main()
   {
    int i,j,n=5;
    clrscr();
    for(i=1;i<=n;i++)
    {
     for(j=n;j>=1;j--)
     {
     if(j<n-i)
     printf(" ");
     else
     printf("%d",j);
     }
     printf("\n");
     }
     getch();
      }

